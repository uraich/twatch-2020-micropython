#!/usr/bin/env python
import os, sys, getopt, re, pickle

class State:
    SearchStartAPI = 0
    SearchEndAPI = 1
    DoneAPI = 2

# [file_name, api_title, api_label]
apis = [ 
    ["src/ble/ancs_client.h", "BLE ANCS Client", "ancsClient"],
    ["src/ble/att_db_util.h", "BLE ATT Database", "attDb"],
    ["src/ble/att_server.h", "BLE ATT Server", "attServer"],
    ["src/ble/gatt_client.h", "BLE GATT Client", "gattClient"],
    ["src/ble/le_device_db.h", "BLE Device Database", "leDeviceDb"],
    ["src/ble/sm.h", "BLE Security Manager", "sm"],

    ["src/classic/bnep.h", "BNEP", "bnep"],
    ["src/classic/btstack_link_key_db.h","Link Key DB","lkDb"],
    ["src/classic/hsp_hs.h","HSP Headset","hspHS"],
    ["src/classic/hsp_ag.h","HSP Audio Gateway","hspAG"],   
    ["src/classic/hfp_hf.h","HFP Hands-Free","hfpHF"],
    ["src/classic/hfp_ag.h","HFP Audio Gateway","hfpAG"],
    ["src/classic/pan.h", "PAN", "pan"],
    ["src/classic/rfcomm.h", "RFCOMM", "rfcomm"],
    ["src/classic/sdp_client.h", "SDP Client", "sdpClient"],
    ["src/classic/sdp_client_rfcomm.h", "SDP RFCOMM Query", "sdpQueries"],
    ["src/classic/sdp_server.h", "SDP Server", "sdpSrv"],
    ["src/classic/sdp_util.h","SDP Utils", "sdpUtil"],

    ["src/ad_parser.h", "BLE Advertisements Parser", "advParser"],
    ["src/btstack_chipset.h","BTstack Chipset","btMemory"],
    ["src/btstack_control.h","BTstack Hardware Control","btControl"],
    ["src/btstack_event.h","HCI Event Getter","btEvent"],
    ["src/btstack_memory.h","BTstack Memory Management","btMemory"],
    ["src/btstack_linked_list.h","BTstack Linked List","btList"],
    ["src/btstack_run_loop.h", "Run Loop", "runLoop"],
    ["src/btstack_util.h", "Common Utils", "btUtil"],
    ["src/gap.h", "GAP", "gap"],
    ["src/hci.h", "HCI", "hci"],
    ["src/hci_dump.h","HCI Logging","hciTrace"],
    ["src/hci_transport.h","HCI Transport","hciTransport"],
    ["src/l2cap.h", "L2CAP", "l2cap"],
]

functions = {}
typedefs = {}

api_header = """

## API_TITLE API {#sec:API_LABLEAPIAppendix}

"""

api_ending = """
"""

code_ref = """GITHUBFPATH#LLINENR"""


def codeReference(fname, githubfolder, filepath, linenr):
    global code_ref
    ref = code_ref.replace("GITHUB", githubfolder)
    ref = ref.replace("FPATH", filepath)
    ref = ref.replace("LINENR", str(linenr))
    return ref


def writeAPI(apifile, btstackfolder, apis, mk_codeidentation):
    with open(apifile, 'w') as fout:
        for api_tuple in apis:
            api_filename = btstackfolder + api_tuple[0]
            api_title = api_tuple[1]
            api_lable = api_tuple[2]

            title = api_header.replace("API_TITLE", api_title).replace("API_LABLE", api_lable)
            fout.write(title)
            
            state = State.SearchStartAPI
            with open(api_filename, 'rb') as fin:
                for line in fin:
                    if state == State.SearchStartAPI:
                        parts = re.match('.*API_START.*',line)
                        if parts:
                            state = State.SearchEndAPI
                        continue
                    
                    if state == State.SearchEndAPI:
                        parts = re.match('.*API_END.*',line)
                        if parts:
                            state = State.DoneAPI
                            continue
                        fout.write(mk_codeidentation + line)
                        continue


def createIndex(btstackfolder, apis, githubfolder):
    global typedefs, functions
    
    for api_tuple in apis:
        api_filename = btstackfolder + api_tuple[0]
        api_title = api_tuple[1]
        api_lable = api_tuple[2]

        linenr = 0
        with open(api_filename, 'rb') as fin:
            typedefFound = 0
            multiline_function_def = 0
            state = State.SearchStartAPI
            
            for line in fin:
                if state == State.DoneAPI:
                    continue

                linenr = linenr + 1
                
                if state == State.SearchStartAPI:
                    parts = re.match('.*API_START.*',line)
                    if parts:
                        state = State.SearchEndAPI
                    continue
                
                if state == State.SearchEndAPI:
                    parts = re.match('.*API_END.*',line)
                    if parts:
                        state = State.DoneAPI
                        continue

                if multiline_function_def:
                    function_end = re.match('.*;\n', line)
                    if function_end:
                        multiline_function_def = 0
                    continue

                param = re.match(".*@brief.*", line)
                if param:
                    continue
                param = re.match(".*@param.*", line)
                if param:
                    continue
                param = re.match(".*@return.*", line)
                if param:
                    continue
                
                # search typedef struct begin
                typedef =  re.match('.*typedef\s+struct.*', line)
                if typedef:
                    typedefFound = 1
                
                # search typedef struct end
                if typedefFound:
                    typedef = re.match('}\s*(.*);\n', line)
                    if typedef:
                        typedefFound = 0
                        typedefs[typedef.group(1)] = codeReference(typedef.group(1), githubfolder, api_tuple[0], linenr)
                    continue

                ref_function =  re.match('.*typedef\s+void\s+\(\s*\*\s*(.*?)\)\(.*', line)
                if ref_function:
                    functions[ref_function.group(1)] = codeReference(ref_function.group(1), githubfolder, api_tuple[0], linenr)
                    continue

                function = re.match('(.*?)\s*\(.*\(*.*;\n', line)
                if function:
                    parts = function.group(1).split(" ");
                    name = parts[len(parts)-1]
                    if len(name) == 0:
                        print(parts);
                        sys.exit(10)
                    functions[name] = codeReference( name, githubfolder, api_tuple[0], linenr)
                    continue

                function = re.match('.(.*?)\s*\(.*\(*.*', line)
                if function:
                    if len(name) == 0:
                        print(parts);
                        sys.exit(10)
                    parts = function.group(1).split(" ");
                    name = parts[len(parts)-1]
                    multiline_function_def = 1
                    functions[name] = codeReference(name, githubfolder, api_tuple[0], linenr)

                        
def main(argv):
    mk_codeidentation = "    "
    
    btstackfolder = "../../"
    githubfolder  = "https://github.com/bluekitchen/btstack/blob/master/"
    
    docsfolder    = "docs/"
    apifile   = docsfolder + "appendix/apis.md"
    indexfile = docsfolder + "appendix/index.md"

    cmd = 'update_apis.py [-b <btstackfolder>] [-a <apifile>] [-g <githubfolder>] [-i <indexfile>]'
    try:
        opts, args = getopt.getopt(argv,"hiso:",["bfolder=","afile=","gfolder=","ifile="])
    except getopt.GetoptError:
        print cmd
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print cmd
            sys.exit()
        elif opt in ("-b", "--bfolder"):
            btstackfolder = arg
        elif opt in ("-a", "--afile"):
            apifile = arg
        elif opt in ("-g", "--gfolder"):
            btstackfolder = arg
        elif opt in ("-i", "--ifile"):
            indexfile = arg
    print 'BTstack folder is :', btstackfolder
    print 'API file is       :', apifile
    print 'Github path is    :', githubfolder
    print 'Index file is     :', indexfile

    writeAPI(apifile, btstackfolder, apis, mk_codeidentation)
    createIndex(btstackfolder, apis, githubfolder)

    for function in functions:
        parts = function.split(' ')
        if (len(parts) > 1):
            print (parts)

    references = functions.copy()
    references.update(typedefs)

    with open(indexfile, 'w') as fout:
        for function, reference in references.items():
            fout.write("[" + function + "](" + reference + ")\n")
            
    pickle.dump(references, open( "tmp/references.p", "wb" ) )

if __name__ == "__main__":
   main(sys.argv[1:])
