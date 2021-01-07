# initialize the WiFi network
# read the current time from NTP and setup the ESP32 Real Time Clock
# Copyright (c) U. Raich, May 2020
#
import network,sys,time
from ntptime import settime

def connect(ssid=None,password=None,hostname=None):
    encoding          ='utf-8'
    ssid_Lochau       = "mywifi1"
    password_Lochau   =  "mypassword1"
    ssid_Sauverny     = "mywifi2"
    password_Sauverny =  "mypasswword"
    
    station = network.WLAN(network.STA_IF)
    if station.isconnected() == True:
        print("Already connected")
        settime()
        return
    
    if station.active():
        print("Station is already active")
    else:
        print ("Activating station")
        if not station.active(True):
            print("Cannot activate station! giving up ...")
            sys.exit()
            
    accessPoints = station.scan()
    print(len(accessPoints), "access points found")
    if ssid == None:
        for i in range(len(accessPoints)):
            if str(accessPoints[i][0],encoding) == ssid_Lochau:
                print("Connecting to ",ssid_Lochau)
                ssid = ssid_Lochau
                password = password_Lochau
                break
            elif str(accessPoints[i][0],encoding) == ssid_Sauverny:
                print("Connecting to ",ssid_Sauverny)
                ssid = ssid_Sauverny
                password = password_Sauverny
                break
        
        if ssid == None:
            print("Don't know where we are. Giving up ...")
            sys.exit()
    # sets the hostname
    # you can access the esp32 with hostname.local on your PC in my case: esp32Uli.local
    if not hostname:
        station.config(dhcp_hostname="esp32Uli")
    elif isinstance(hostname,str):
        station.config(dhcp_hostname=hostname)
        
    station.connect(ssid, password)
 
    while station.isconnected() == False:
      pass
 
    print("Connection successful")
    
    # setup system time
    settime()
    
    print(station.ifconfig())


def getIPAddress():
    station = network.WLAN(network.STA_IF)
    return station.ifconfig()[0]
    
def gmtTime():
    return time.localtime(time.time())

def cetTime():
    # print the time and date
    now=time.time()
    
    # correct for CET time zone
    year = time.localtime()[0]       #get current year

    HHMarch   = time.mktime((year,3 ,(31-(int(5*year/4+4))%7),1,0,0,0,0,0)) #Time of March change to CEST
    HHOctober = time.mktime((year,10,(31-(int(5*year/4+1))%7),1,0,0,0,0,0)) #Time of October change to CET
    now=time.time()
    if now < HHMarch :               # we are before last sunday of march
        cet=time.localtime(now+3600) # CET:  UTC+1H
    elif now < HHOctober :           # we are before last sunday of october
        cet=time.localtime(now+7200) # CEST: UTC+2H
    else:                            # we are after last sunday of october
        cet=time.localtime(now+3600) # CET:  UTC+1H
    return cet

def dateString(dateTime):
    monthTable={1: "Jan",
                2: "Feb",
                3: "Mar",
                4: "Apr",
                5: "May",
                6: "Jun",
                7: "Jul",
                8: "Aug",
                9: "Sep",
                10: "Oct",
                11: "Nov",
                12: "Dec"}
    dateStr = '{:02d} {:s} {:4d} {:02d}:{:02d}:{:02d}'.format(dateTime[2],monthTable[dateTime[1]],dateTime[0],
                                                          dateTime[3],dateTime[4],dateTime[5])
    return dateStr
    
