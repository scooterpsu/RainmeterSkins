[Variables]
    DefaultMonitor=//./DISPLAY1
    
[MonitorCount]
    UpdateDivider=-1
    Measure=Plugin
    Plugin=SysInfo
    SysInfoType=NUM_MONITORS

[CurrentMonitorScript]
    Disabled=1
    Measure=Script
    ScriptFile=#@#\Scripts\CurrentMonitor.lua
    NumMonitors=[MonitorCount]
    OnUpdateAction=[!SetOption CurrentMonitor String //./DISPLAY[CurrentMonitorScript]]
    
[CurrentMonitor]
    Measure=String
    String=#DefaultMonitor#
    OnChangeAction=[!UpdateMeasure WallpaperEnginePath][!SetOption FileViewFolder Path [WallpaperEnginePath]][!CommandMeasure FileViewFolder Update]

[ProgramFiles]
    Measure=String
    String=%ProgramFiles(x86)%
    IfMatch=^$
    IfMatchAction=[!SetOption WallpaperEngineConfig Url "file:///%ProgramFiles%/Steam/steamapps/common/wallpaper_engine/config.json"]
    IfNotMatchAction=[!SetOption WallpaperEngineConfig Url "file:///%ProgramFiles(x86)%/Steam/steamapps/common/wallpaper_engine/config.json"]
    UpdateDivider=-1
    Substitute=" ":"%20","\":"/"

[WallpaperEngine32Running]
    Measure=Plugin
    Plugin=Process
    ProcessName=wallpaper32.exe
    
[WallpaperEngine64Running]
    Measure=Plugin
    Plugin=Process
    ProcessName=wallpaper64.exe

[WallpaperEngineRunning]
    Measure=Calc
    Formula=WallpaperEngine32Running+WallpaperEngine64Running
    IfAboveValue=-1
    IfAboveAction=[!EnableMeasure WallpaperEngineConfig][!SetOption Chameleon UpdateDivider "-1"][!UpdateMeasure Chameleon]
    IfBelowValue=-1
    IfBelowAction=[!DisableMeasure WallpaperEngineConfig][!SetOption Chameleon Type "Desktop"][!SetOption Chameleon UpdateDivider "1"][!UpdateMeasure Chameleon]

[WallpaperEngineConfig]
    Disabled=1
    Measure=Plugin
    Plugin=WebParser
    RegExp=(?siU)"wallpaperconfig"(.*)"selectedwallpapers" :.*{(.*)"version"
    UpdateRate=20
    OnRegExpErrorAction=[!SetOption Chameleon Type "Desktop"][!SetOption Chameleon UpdateDivider "1"][!UpdateMeasure Chameleon]
    OnConnectErrorAction=[!SetOption Chameleon Type "Desktop"][!SetOption Chameleon UpdateDivider "1"][!UpdateMeasure Chameleon]
    OnChangeAction=[!SetOption Chameleon UpdateDivider "-1"][!UpdateMeasure WallpaperEngineLayout][!UpdateMeasure WallpaperEnginePath]

[WallpaperEngineLayout]
    UpdateDivider=-1
    Measure=WebParser
    URL=[WallpaperEngineConfig]
    StringIndex=1
    RegExp=(?siU)"layout" : (.*),
    StringIndex2=1
    IfEqualValue=0
    IfEqualAction=[!EnableMeasure CurrentMonitorScript]
    IfAboveValue=0
    IfAboveAction=[!DisableMeasure CurrentMonitorScript][!SetOption CurrentMonitor String #DefaultMonitor#][!UpdateMeasure WallpaperEnginePath]

[WallpaperEnginePath]
    UpdateDivider=-1
    Measure=WebParser
    URL=[WallpaperEngineConfig]
    StringIndex=2
    RegExp=(?siU)"[CurrentMonitor]".*"file" : "(.*)"
    DynamicVariables=1
    StringIndex2=1
    RegExpSubstitute=1
    Substitute="^(.+/)([^/]+)$":"\1","/":"\"
    OnChangeAction=[!SetOption FileViewFolder Path [WallpaperEnginePath]][!CommandMeasure FileViewFolder Update]
    
[FileViewFolder]
    Measure=Plugin
    Plugin=FileView
    ShowDotDot=0
    ShowFolder=0
    Count=1
    WildcardSearch=preview.*
    FinishAction=[!UpdateMeasure PreviewFilename]
  
[PreviewFilename]
    UpdateDivider=-1
    Measure=Plugin
    Plugin=FileView
    Group=Filename
    Path=[FileViewFolder]
    Type=FileName
    IfMatch=preview.*
    IfMatchAction=[!SetOption PreviewPath String [FileViewFolder][PreviewFilename]][!UnpauseMeasure PreviewPath]
    IfMatchMode=1
    
[PreviewPath]
    Paused=1
    Measure=String
    IfMatch=.*preview.*
    IfMatchAction=[!SetOption CheckFile FilePath [PreviewPath]][!UnpauseMeasure CheckFile][!PauseMeasure PreviewPath]
    IfMatchMode=1
    
[CheckFile]
    Paused=1
    Measure=Script
    ScriptFile=#@#\Scripts\fileexists.lua
    IfMatch=-1
    IfNotMatchAction=[!SetOption Chameleon Type "File"][!UpdateMeasure Chameleon][!PauseMeasure CheckFile]
    IfMatchMode=1