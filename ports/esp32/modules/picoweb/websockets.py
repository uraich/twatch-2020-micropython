import uasyncio as asyncio
from hashlib import sha1
from binascii import b2a_base64
import websocket

TEXT = 0x01
BINARY = 0x02
CLOSE = 0x08

def make_respkey(webkey):
    try:
        webkey += b"258EAFA5-E914-47DA-95CA-C5AB0DC85B11"
        respkey = sha1(webkey).digest()
        respkey = b2a_base64(respkey).decode().strip()
        print('respkey: ',respkey)
        return respkey
    except Exception as e:
        print("Error in handshake: ",e)
        return None
    
class WSWriter:

    def __init__(self, reader, writer):
        # Reader is passed for symmetry with WSReader() and ignored.
        self.writer = writer
    async def awrite (self, data):
        print("Sending: ",data)
        length = len(data)
        ret = None
        if length <= 125:
            ret = bytearray([129, length])

        for byte in data.encode("utf-8"):
            ret.append(byte)
        print("ret: ",ret)
        await self.writer.awrite(ret)
        print("echoing done")

class WSReader:
    def __init__(self,reader,writer):    
        self.reader=reader
        self.writer=writer
        
    async def connect(self,req):
        webkey = None
        print("check if Sec-WebSocket-Key exists in header")
        if b'Sec-WebSocket-Key' in req.headers:
            print('websocket connect request seen')
            webkey = req.headers[b'Sec-WebSocket-Key']
        else:
            raise ValueError("Not a websocker request")

        print("webkey: ",webkey)
        respkey = make_respkey(webkey)
        print("response key created")
        print(b"""\
HTTP/1.1 101 Switching Protocols\r
Upgrade: websocket\r
Connection: Upgrade\r
Sec-WebSocket-Accept: """)
        
        await self.writer.awrite(b"""\
HTTP/1.1 101 Switching Protocols\r
Upgrade: websocket\r
Connection: Upgrade\r
Sec-WebSocket-Accept: """)
        
        await self.writer.awrite(respkey)
        print(respkey)
        await self.writer.awrite("\r\n\r\n")
        print("Finished webrepl handshake")
        ws = websocket.websocket(self.reader.s)
        self.ws_reader = asyncio.StreamReader(self.reader.s, ws)

    async def read(self,length):
        data = await self.ws_reader.read(length)
        print("websocket frame: ",data)
        if not data: return data
        """
            Parse a WebSocket frame. If there is not a complete frame in the
            buffer, return without modifying the buffer.
        """
        payload_start = 2

        # try to pull first two bytes
        if len(data) < 3: return
        for i in range(len(data)):
            print(hex(data[i])," ",end="")
        print("")

        b=data[0]
        fin = b & 0x80      # 1st bit
        print("fin: ",fin)
        # next 3 bits reserved    
        opcode = b & 0x0f   # low 4 bits
        print(opcode)
        
        b2=data[1]   
        mask = b2 & 0x80      # high bit of the second byte
        if mask:
            print("mask bit is set")
        length = b2 & 0x7f    # low 7 bits of the second byte

        # check that enough bytes remain
        if len(data) < payload_start + 4:
            return
        elif length == 126:
            length, = struct.unpack(">H", data[2:4])
            payload_start += 2
        elif length == 127:
            length, = struct.unpack(">I", data[2:6])
            payload_start += 4

        if mask:
            mask_bytes = [b for b in data[payload_start:payload_start + 4]]
            print("mask bytes: ",mask_bytes)
            payload_start += 4
            
        # is there a complete frame in the buffer?
        if len(data) < payload_start + length:
            return

        # remove leading bytes, decode if necessary, dispatch
        payload = data[payload_start:payload_start + length]
        print("payload: ",payload)
        data = data[payload_start + length:]

        # use xor and mask bytes to unmask data
        if mask:
            unmasked = [mask_bytes[i % 4] ^ b for b, i in zip(payload, range(len(payload)))]
            for i in range(len(unmasked)):
                print("unmasked: ",hex(unmasked[i]))

            payload = "".join([chr(c) for c in unmasked])

        if opcode == TEXT:
            print("payload string: ",payload)
            ret = payload
            #self.handler.dispatch(s)
        if opcode == BINARY:
            print("BINARY websockets are not yet implemented")
            #self.handler.dispatch(payload)
            assert(0)
        if opcode == CLOSE:
            print("Payload length: ",len(payload))
            for i in range(len(payload)):
                print(hex(ord(payload[i]))," ",end="")
            print("")
            return None

        print(ret)
        return ret       
