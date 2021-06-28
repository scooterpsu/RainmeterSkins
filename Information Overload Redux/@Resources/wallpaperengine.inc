[Variables]
    ;WallpaperEngineFolder=%ProgramFiles(x86)%/Steam
    WallpaperEngineFolder="E:/SteamLibrary"

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
    RegExp=(?siU)"lastselectedmonitor" : "(.*)",*selectedwallpapers" :.*{(.*)"version"
    UpdateRate=20
    URL="file://#WallpaperEngineFolder#/steamapps/common/wallpaper_engine/config.json"
    OnRegExpErrorAction=[!SetOption Chameleon Type "Desktop"][!SetOption Chameleon UpdateDivider "1"][!UpdateMeasure Chameleon]
    OnConnectErrorAction=[!SetOption Chameleon Type "Desktop"][!SetOption Chameleon UpdateDivider "1"][!UpdateMeasure Chameleon]
    OnChangeAction=[!SetOption Chameleon UpdateDivider "-1"][!UpdateMeasure WallpaperEngineLastMonitor]

[WallpaperEngineLastMonitor]
    Measure=WebParser
    URL=[WallpaperEngineConfig]
    StringIndex=1
    RegExp=(?siU)DISPLAY(.*){
    DynamicVariables=1
    IfMatch=(?=DISPLAY)
    IfMatchAction=[!EnableMeasure WallpaperEnginePath][!UpdateMeasure WallpaperEnginePath]
    OnChangeAction=[!UpdateMeasure WallpaperEngineConfig]

[WallpaperEnginePath]
    Disabled=1
    ;UpdateDivider=-1
    Measure=WebParser
    URL=[WallpaperEngineConfig]
    StringIndex=2
    RegExp=(?siU)[&WallpaperEngineLastMonitor].*"file" : "(.*)"
    DynamicVariables=1
    StringIndex2=1
    RegExpSubstitute=1
    Substitute="^(.+/)([^/]+)$":"\1","/":"\"
    OnUpdateAction=[!SetOption FileViewFolder Path [WallpaperEnginePath]][!CommandMeasure FileViewFolder Update]
    
[FileViewFolder]
    Measure=Plugin
    Plugin=FileView
    ShowDotDot=0
    ShowFolder=0
    Count=1
    WildcardSearch=preview.*
    FinishAction=[!UpdateMeasure PreviewFilename]
  
[PreviewFilename]
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