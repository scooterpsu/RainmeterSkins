[Variables]
    isFullscreen = 0

[MeasureIsFullScreen]
    Measure=Plugin
    Plugin=IsFullScreen
    IfCondition=MeasureIsFullScreen=1
    IfTrueAction=[!SetVariable isFullscreen 1]
    IfFalseAction=[!SetVariable isFullscreen 0]
    IfMatch=^$|Explorer.EXE
    IfMatchAction=[!SetVariable isFullscreen 0]
    OnChangeAction=[!UpdateMeter *][!Redraw]