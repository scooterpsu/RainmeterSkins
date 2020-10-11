[Rainmeter]
    Update=2500
    @Include=#@#\chameleon.inc
    @Include2=#@#\isfullscreen.inc
	ContextTitle=Open settings.inc
	ContextAction=["#@#\settings.inc"]	

[Variables]
    Font="Agency FB"
    
;======[POSITION/SIZE SETTINGS]=====;
    Width=365
    LabelWidth=56
    DividerOffset=15
    SidebarWidth=25
    
;========[COLOR SETTINGS]========;
;Background color
    BackgroundColor=[Background2],215
    
;Bar fill/value color
    AccentColor=[Foreground2],230
    
;Label text, icon color
    LabelColor=[Foreground1],240
    
;Bar background and border color
    DetailColor=[Background1],74

;======[PER SECTION SETTINGS]======;
;CPU settings
	; CPUPKG
	Temp-CPUPKG-SensorId=0xf0000400
	Temp-CPUPKG-EntryId=0x10000fe
	Clock-CPUPKG-SensorId=0xf0000300
	Clock-CPUPKG-EntryId=0x6000000
	Usage-CPUPKG-EntryId=0x7000009
	
	; CPU0
	Temp-CPU0-SensorId=0xf0000400
	Temp-CPU0-EntryId=0x1000000
	Clock-CPU0-SensorId=0xf0000300
	Clock-CPU0-EntryId=0x6000000
	Usage-CPU0-EntryId=0x7000000

	; CPU1
	Temp-CPU1-SensorId=0xf0000400
	Temp-CPU1-EntryId=0x1000001
	Clock-CPU1-SensorId=0xf0000300
	Clock-CPU1-EntryId=0x6000001
	Usage-CPU1-EntryId=0x7000001

	; CPU2
	Temp-CPU2-SensorId=0xf0000400
	Temp-CPU2-EntryId=0x1000002
	Clock-CPU2-SensorId=0xf0000300
	Clock-CPU2-EntryId=0x6000002
	Usage-CPU2-EntryId=0x7000002

	; CPU3
	Temp-CPU3-SensorId=0xf0000400
	Temp-CPU3-EntryId=0x1000003
	Clock-CPU3-SensorId=0xf0000300
	Clock-CPU3-EntryId=0x6000003
	Usage-CPU3-EntryId=0x7000003

	; CPU4
	Temp-CPU4-SensorId=0xf0000400
	Temp-CPU4-EntryId=0x1000004
	Clock-CPU4-SensorId=0xf0000300
	Clock-CPU4-EntryId=0x6000004
	Usage-CPU4-EntryId=0x7000004

	; CPU5
	Temp-CPU5-SensorId=0xf0000400
	Temp-CPU5-EntryId=0x1000005
	Clock-CPU5-SensorId=0xf0000300
	Clock-CPU5-EntryId=0x6000005
	Usage-CPU5-EntryId=0x7000005
	
	; CPU6
	Temp-CPU6-SensorId=0xf0000400
	Temp-CPU6-EntryId=0x1000006
	Clock-CPU6-SensorId=0xf0000300
	Clock-CPU6-EntryId=0x6000006
	Usage-CPU6-EntryId=0x7000006	

	; CPU7
	Temp-CPU7-SensorId=0xf0000400
	Temp-CPU7-EntryId=0x1000007
	Clock-CPU7-SensorId=0xf0000300
	Clock-CPU7-EntryId=0x6000007
	Usage-CPU7-EntryId=0x7000007
	
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
    HeadsetLabel="Logitech G533 Headset"
    HeadsetHardwareID=4294967295
	
;Case fan settings
    FAN1NAME="Top"
    FAN1SENSOR=0x3000003
    FAN2NAME="Bottom"
    FAN2SENSOR=0x3000002
	FAN3NAME="Rear"
    FAN3SENSOR=0x3000000
    
;Motherboard settings  
    ;Supports up to 6 columns
    Columns=3

	MotherboardID=0xf7067980
	MotherboardECID=0xf0ec0502	

    ;------Column 1------;
    T1NAME="Motherboard"
    T1SENSOR=0x1000000
	T1SOURCE=#MotherboardID#
    
    T7NAME="VRM"
    T7SENSOR=0x1000000
	T7SOURCE=#MotherboardECID#	
    
    ;------Column 2------;
    T2NAME="CPU"
    T2SENSOR=0x1000001
	T2SOURCE=#MotherboardID#	
    
    T8NAME="PCH"
    T8SENSOR=0x1000001
	T8SOURCE=#MotherboardECID#
    
    ;------Column 3------;
    T3NAME="CPU (PECI)"
    T3SENSOR=0x1000007
	T3SOURCE=#MotherboardID#
    
    T9NAME="CPU (Weight)"
    T9SENSOR=0x1000006
	T9SOURCE=#MotherboardID#
    
    ;------Column 4------;
    T4NAME=""
    T4SENSOR=
	T4SOURCE=#MotherboardID#
    
    T10NAME=""
    T10SENSOR=  
	T10SOURCE=#MotherboardID#
    
    ;------Column 5------;
    T5NAME=""
    T5SENSOR=
	T5SOURCE=#MotherboardID#
    
    T11NAME=""
    T11SENSOR=
	T11SOURCE=#MotherboardID#
    
    ;------Column 6------;
    T6NAME=""
    T6SENSOR=
	T6SOURCE=#MotherboardID#	
    
    T12NAME=""
    T12SENSOR=    
	T12SOURCE=#MotherboardID#
    
    ;------Fan and Voltage------;
    MBFAN1NAME="RADIATOR"
    MBFAN1SENSOR=0x3000001
	MBFAN1SOURCE=#MotherboardID#	
	
    MBFAN2NAME="PUMP"
    MBFAN2SENSOR=0x3000006
	MBFAN2SOURCE=#MotherboardID#	
    
    MBV1NAME="VCORE"
    MBV1SENSOR=0x2000000
	MBV1SOURCE=#MotherboardID#
 
;Now Playing Settings
    PLAYER="iTunes"
    AUTOHIDE="NETWORK"
 
;GPU Settings
	GPU-SensorId=0xe0002000
	Clock-GPU-EntryId=0x6000000
	Load-GPU-EntryId=0x7000003
	MemClock-GPU-EntryId=0x6000004
	MemUsage-GPU-EntryId=0x7000008
	Temp-GPU-EntryId=0x1000000
	Fan-GPU-EntryId=0x3000000
	FanPerc-GPU-EntryId=0x8000000	
	VRAM=8192
 
;PSU Settings
	PSU-SensorId=0xf5000650
	Temp-PSU-EntryId=0x1000000
	Fan-PSU-EntryId=0x3000000
	Output-PSU-EntryId=0x500000a	
	Eff-PSU-EntryId=0x8000000		

 
;RAM Settings
	RAM-SensorId=0xf0000301
	RAM-Temp-SensorID=0xf3000002
	Clock-RAM-EntryId=0x6000000
	Tcas-RAM-EntryId=0x8000001
	Trcd-RAM-EntryId=0x8000002
	Trp-RAM-EntryId=0x8000003
	Tras-RAM-EntryId=0x8000004	

;Storage Settings
    D1=C:
    D1Type=M.2
    D2=D:
    D2Type=M.2
    D3=E:
    D3Type=SSD

;Memory Settings
	MemType = DDR4

;Network Settings
    ;http://speedtest.net
    MaxDownloadMbits=57.93
    MaxUploadMbits=51.71
    
;Visualizer Settings
    Bands=30
	
;Wallpaper Engine Switcher
	WallCount=10
	Wall1Name="Alley"
	Wall1Path="E:\SteamLibrary\steamapps\workshop\content\431960\1435571439\project.json"
	Wall2Name="Coffee"
	Wall2Path="E:\SteamLibrary\steamapps\workshop\content\431960\1737236846\project.json"
	Wall3Name="Doom"
	Wall3Path="E:\SteamLibrary\steamapps\common\wallpaper_engine\projects\myprojects\doom_eternal\project.json"
	Wall4Name="Halo"
	Wall4Path="E:\SteamLibrary\steamapps\workshop\content\431960\1408653958\project.json"
	Wall5Name="Lake"
	Wall5Path="E:\SteamLibrary\steamapps\workshop\content\431960\1315534440\project.json"
	Wall6Name="RGB"
	Wall6Path="E:\SteamLibrary\steamapps\workshop\content\431960\1403849247\project.json"
	Wall7Name="ROG"
	Wall7Path="E:\SteamLibrary\steamapps\workshop\content\431960\1594469840\project.json"
	Wall8Name="Bill"
	Wall8Path="E:\SteamLibrary\steamapps\workshop\content\431960\1325470854\project.json"	
	Wall9Name="Mando"
	Wall9Path="E:\SteamLibrary\steamapps\workshop\content\431960\1948971939\project.json"
	Wall10Name="Synth"
	Wall10Path="E:\SteamLibrary\steamapps\workshop\content\431960\1639445503\project.json"	

;Launcher Settings
	Path="E:\Documents\Launcher"
	IconSize=36
	
@Include=#@#\styles.inc