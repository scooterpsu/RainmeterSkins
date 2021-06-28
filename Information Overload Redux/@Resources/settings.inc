[Rainmeter]
    Update=1000
    @Include=#@#\chameleon.inc
    @Include2=#@#\isfullscreen.inc
	ContextTitle=Open settings.inc
	ContextAction=["#@#\settings.inc"]	

[Variables]
    Font="Agency FB"
	Columns=3
    
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
	CPUCoreUsageIndex=16
	CPUCoreClockIndex=17
	CPUCoreTempIndex=26
	
	; CPU0
	CPU0ClockIndex=0
	CPU0UsageIndex=8
	CPU0TempIndex=18

	; CPU1
	CPU1ClockIndex=1
	CPU1UsageIndex=9
	CPU1TempIndex=19

	; CPU2
	CPU2ClockIndex=2
	CPU2UsageIndex=10
	CPU2TempIndex=20

	; CPU3
	CPU3ClockIndex=3
	CPU3UsageIndex=11
	CPU3TempIndex=21

	; CPU4
	CPU4ClockIndex=4
	CPU4UsageIndex=12
	CPU4TempIndex=22

	; CPU5
	CPU5ClockIndex=5
	CPU5UsageIndex=13
	CPU5TempIndex=23
	
	; CPU6
	CPU6ClockIndex=6	
	CPU6UsageIndex=14
	CPU6TempIndex=24

	; CPU7
	CPU7ClockIndex=7
	CPU7UsageIndex=15
	CPU7TempIndex=25
	
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
	MotherboardT1Index=34
	MotherboardT2Index=35
	MotherboardT3Index=36
	MotherboardT4Index=37
	MotherboardT5Index=38
	MotherboardT6Index=-1
	
	MotherboardF1Index=41
	MotherboardF2Index=44
	
	MotherboardV1Index=39
 
;Now Playing Settings
    PLAYER="iTunes"
    AUTOHIDE="NETWORK"
 
;GPU Settings
	GPUTempIndex=46
	GPUFanIndex=47
	GPUClockIndex=48		
	GPUMemClockIndex=49	
	GPULoadIndex=50
	GPUMemUsageIndex=51	
	GPUFanPercIndex=52
	VRAM=8192
 
;PSU Settings
	PSUTempIndex=54
	PSUFanIndex=55
	PSUOutputIndex=56
	PSUEffIndex=57

 
;RAM Settings
	MemTempIndex=45
	MemClockIndex=27
	MemCasIndex=28
	MemtRCDIndex=29
	MemtRPIndex=30
	MemtRASIndex=31
	MemCMDIndex=33

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
    Sensitivity=75
	
;Wallpaper Engine Switcher
	WallCount=10
	Wall1Name="Alley"
	Wall1Path="E:/SteamLibrary/steamapps/workshop/content/431960/1435571439/scene.pkg"
	Wall2Name="Coffee"
	Wall2Path="E:/SteamLibrary/steamapps/workshop/content/431960/1737236846/coffee_break_by_visualdon.mp4"
	Wall3Name="Doom"
	Wall3Path="E:/SteamLibrary/steamapps/common/wallpaper_engine/projects/myprojects/doom_eternal/scene.json"
	Wall4Name="Halo"
	Wall4Path="E:/SteamLibrary/steamapps/workshop/content/431960/1408653958/e3-chief.mp4"
	Wall5Name="Lake"
	Wall5Path="E:/SteamLibrary/steamapps/workshop/content/431960/1315534440/scene.pkg"
	Wall6Name="RGB"
	Wall6Path="E:/SteamLibrary/steamapps/workshop/content/431960/1403849247/scene.pkg"
	Wall7Name="ROG"
	Wall7Path="E:/SteamLibrary/steamapps/workshop/content/431960/1597408060/scene.pkg"
	Wall8Name="Bill"
	Wall8Path="E:/SteamLibrary/steamapps/workshop/content/431960/1325470854/scene.pkg"	
	Wall9Name="Mando"
	Wall9Path="E:/SteamLibrary/steamapps/workshop/content/431960/1948971939/scene.pkg"
	Wall10Name="Synth"
	Wall10Path="E:/SteamLibrary/steamapps/workshop/content/431960/1843218479/synth city by visualdon.mp4"	

;Microphone Switcher
	Mic1Name="G533"
	Mic1Device="Headset Mic"
	Mic2Name="VD"
	Mic2Device="Virtual Desktop Mic"
	Mic3Name="Link"
	Mic3Device="Oculus Link Mic"

;Launcher Settings
	Path="E:\Documents\Launcher"
	IconSize=36
	
@Include=#@#\styles.inc