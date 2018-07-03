[Variables]
    FallbackBG1=666666
    FallbackBG2=333333
    FallbackFG1=999999
    FallbackFG2=FFFFFF

[Chameleon]
    Measure=Plugin
    Plugin=Chameleon
    Type=Desktop
    Path=[WallpaperEnginePath]
    UpdateDivider=1
    OnChangeAction=[!UpdateMeasureGroup Colors]
    FallbackBG1=#FallbackBG1#
    FallbackBG2=#FallbackBG2#
    FallbackFG1=#FallbackFG1#
    FallbackFG2=#FallbackFG2#

[Background1]
    Measure=Plugin
    Plugin=Chameleon
    Parent=Chameleon
    Color=Background1
    UpdateDivider=-1
    Group=Colors
    Format=Dec
    OnChangeAction=[!Update *]

[Background2]
    Measure=Plugin
    Plugin=Chameleon
    Parent=Chameleon
    Color=Background2
    UpdateDivider=-1
    Group=Colors
    Format=Dec

[Foreground1]
    Measure=Plugin
    Plugin=Chameleon
    Parent=Chameleon
    Color=Foreground1
    UpdateDivider=-1
    Group=Colors
    Format=Dec

[Foreground2]
    Measure=Plugin
    Plugin=Chameleon
    Parent=Chameleon
    Color=Foreground2
    UpdateDivider=-1
    Group=Colors
    Format=Dec

;Comment out the include to disable wallpaper engine support    
@Include=#@#\wallpaperengine.inc