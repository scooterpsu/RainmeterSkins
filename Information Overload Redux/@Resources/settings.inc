[Rainmeter]
    @Include=#@#\chameleon.inc
    @Include2=#@#\isfullscreen.inc

[Variables]
    Font="Agency FB"
    
;======[POSITION/SIZE SETTINGS]=====;
    Width=370
    LabelWidth=56
    DividerOffset=14
    SidebarWidth=24
    
;========[COLOR SETTINGS]========;
;Background color
    BackgroundColor=[Background2],200
    
;Bar fill/value color
    AccentColor=[Foreground2],230
    
;Label text, icon color
    LabelColor=[Foreground1],240
    
;Bar background and border color
    DetailColor=[Background1],74
    
;FrostedGlass style (Acrylic/Blur)
    FrostedType=Acrylic
;======[PER SECTION SETTINGS]======;
;AIO settings
    MaxPumpRPM=3000
    MaxFanRPM=3000
    AIONAME="Corsair H100i V2"
    AIOTEMP=0-0-H100iV2_Temp_1
    AIOFAN=0-0-H100iV2_Fan_1
    AIOPUMP=0-0-H100iV2_Pump
    
;Audio settings
    VolumeIncrement=1
    
;Battery settings
    ControllerLabel="Xbox One Controller"
    ControllerPort=0
    HeadsetLabel="Logitech G930 Headset"
    HeadsetMaxBattery=601
    
;Case fan settings
    FAN1NAME="Front"
    FAN1SENSOR=1-0-CLCC_Fan_1
    FAN2NAME="Rear"
    FAN2SENSOR=1-0-CLCC_Fan_2

;Memory settings
    SwapType=""
    
;Motherboard settings  
    ;Supports up to 6 columns
    Columns=5

    ;------Column 1------;
    T1NAME="SYSTIN"
    T1SENSOR=M-TA
    
    T7NAME="DRAM"
    T7SENSOR=E-T3
    
    ;------Column 2------;
    T2NAME="CPUTIN"
    T2SENSOR=M-TB
    
    T8NAME="PCH"
    T8SENSOR=E-T4
    
    ;------Column 3------;
    T3NAME="CPU PECI"
    T3SENSOR=C-TA
    
    T9NAME="SATA6G"
    T9SENSOR=E-T5
    
    ;------Column 4------;
    T4NAME="VCore 1"
    T4SENSOR=E-T1
    
    T10NAME="PCIe 1"
    T10SENSOR=E-T6    
    
    ;------Column 5------;
    T5NAME="VCore 2"
    T5SENSOR=E-T2
    
    T11NAME="PCIe 2"
    T11SENSOR=E-T7
    
    ;------Column 6------;
    T6NAME=""
    T6SENSOR=
    
    T12NAME=""
    T12SENSOR=    
    
    ;------Fan and Voltage------;
    MBFAN1NAME="Assist Fan 1"
    MBFAN1SENSOR=E-F3
    
    MBV1NAME="CPU Voltage"
    MBV1SENSOR=C-VA

;Storage Settings
    D1=C:
    D1Type=SSD
    D2=E:
    D2Type=HDD

;Network Settings
    ;http://speedtest.net
    MaxDownloadMbits=57.93
    MaxUploadMbits=51.71

@Include=#@#\styles.inc