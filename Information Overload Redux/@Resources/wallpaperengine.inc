[Variables]
    ProgramFiles=[64BitProgramFiles]
    ;Wallpaper Engine display to use with Chameleon (in config.json under "selectedwallpapers")
    WhichDisplay="//./DISPLAY1"

[64BitProgramFiles]
    Measure=String
    String=%ProgramFiles(x86)%
    IfMatch=^$
    IfMatchAction=[!SetVariable ProgramFiles [32BitProgramFiles]]
    IfNotMatchAction=[!SetVariable ProgramFiles [64BitProgramFiles]]
    UpdateDivider=-1
    Substitute=" ":"%20","\":"/"
    
[32BitProgramFiles]
    Measure=String
    String=%ProgramFiles%
    UpdateDivider=-1
    Substitute=" ":"%20","\":"/"

[WallpaperEngineRunning]
    Measure=Plugin
    Plugin=Process
    ProcessName=wallpaper32.exe
    IfAboveValue=0
    IfAboveAction=[!EnableMeasure WallpaperEnginePath][!SetOption Chameleon Type "File"][!SetOption Chameleon UpdateDivider "-1"][!UpdateMeasure Chameleon]
    IfBelowValue=0
    IfBelowAction=[!DisableMeasure WallpaperEnginePath][!SetOption Chameleon Type "Desktop"][!SetOption Chameleon UpdateDivider "1"][!UpdateMeasure Chameleon]

[WallpaperEnginePath]
    Disabled=1
    Measure=Plugin
    Plugin=WebParser
    Url="file:///#ProgramFiles#/Steam/steamapps/common/wallpaper_engine/config.json"
    DynamicVariables=1
    RegExp=(?siU)"wallpaperconfig".*"selectedwallpapers".*"#WhichDisplay#".*"file" : "(.*)".*"wallpaperconfigrecent"
    UpdateRate=20
    StringIndex=1
    RegExpSubstitute=1
    Substitute="^(.+/)([^/]+)$":"\1preview.jpg","/":"\"
    OnChangeAction=[!SetOption Chameleon Type "File"][!SetOption Chameleon UpdateDivider "-1"][!UpdateMeasure Chameleon]
    OnRegExpErrorAction=[!SetOption Chameleon Type "Desktop"][!SetOption Chameleon UpdateDivider "1"][!UpdateMeasure Chameleon]
    OnConnectErrorAction=[!SetOption Chameleon Type "Desktop"][!SetOption Chameleon UpdateDivider "1"][!UpdateMeasure Chameleon]