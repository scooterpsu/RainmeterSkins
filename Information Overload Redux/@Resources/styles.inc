[Variables]
    HideMe3=1
    HideMe4=1
    HideMe5=1
    HideMe6=1
    LeftOffset=(#LabelWidth#+#SidebarWidth#)
    SideLabelOffset=11
    RightPadding=5
    
[COLUMN_HIDE]
    Measure=String
    IfCondition=#Columns# < 3
    IfTrueAction=[!HideMeterGroup "COLUMN_3"][!SetVariable HideMe3 0]
    IfFalseAction=[!ShowMeterGroup "COLUMN_3"][!SetVariable HideMe3 1]
    IfCondition2=#Columns# < 4
    IfTrueAction2=[!HideMeterGroup "COLUMN_4"][!SetVariable HideMe4 0]
    IfFalseAction2=[!ShowMeterGroup "COLUMN_4"][!SetVariable HideMe4 1]
    IfCondition3=#Columns# < 5
    IfTrueAction3=[!HideMeterGroup "COLUMN_5"][!SetVariable HideMe5 0]
    IfFalseAction3=[!ShowMeterGroup "COLUMN_5"][!SetVariable HideMe5 1]
    IfCondition4=#Columns# < 6
    IfTrueAction4=[!HideMeterGroup "COLUMN_6"][!SetVariable HideMe6 0]
    IfFalseAction4=[!ShowMeterGroup "COLUMN_6"][!SetVariable HideMe6 1]
    
[BAR]
    BarColor=#AccentColor#
    BarOrientation=HORIZONTAL
    SolidColor=#DetailColor#
    X=#LeftOffset#
    W=(#Width#-#LeftOffset#-#RightPadding#)
    H=10
    DynamicVariables=1
  
[LINE]
    LineColor=#AccentColor#
    X=#LeftOffset#
    W=(#Width#-#LeftOffset#-#RightPadding#)
    H=12
    DynamicVariables=1   
    LineCount=1
    LineWidth=2
    
[ICON]
    Antialias=1
    W=20
    H=20
    ImageAlpha=215
    ImageTint=#LabelColor#
    DynamicVariables=1
    X=(#LabelWidth#/2)+#SidebarWidth#-10
    
[SHADOW]
    ImageAlpha=175
    ImageTint=0,0,0
    
[TEXT]
    StringEffect=Shadow
    FontFace=#Font#
    AntiAlias=1
    DynamicVariables=1
    FontSize=11

[SIDEBAR_LABEL]
    X=((#SidebarWidth#/3)-4)
    StringAlign=CenterCenter
    FontColor=#LabelColor#
    FontSize=13
    Angle=(Rad(270))
    StringCase=UPPER

[RIGHTTEXT]
    StringAlign=Right
    FontColor=#AccentColor#
    X=(#Width#-#RightPadding#)
    NumOfDecimals=0

[LEFTTEXT]
    StringAlign=Left
    X=(#LeftOffset#-2)
    FontColor=#AccentColor#
    NumOfDecimals=1

[CENTERTEXT]
    StringAlign=Center
    X=((#Width#-#LeftOffset#-#RightPadding#)/2)+#LeftOffset#
    FontColor=#AccentColor#
    NumOfDecimals=1

[LABEL]
    StringAlign=Center
    FontColor=#LabelColor#
    FontSize=12
    X=(#LabelWidth#/2)+#SidebarWidth#

[BOTTOM_LINE]
    X=0
    Shape=Rectangle  1,1,#Width#,1 | Fill Color #DetailColor# | StrokeWidth 0
    DynamicVariables=1

[TEXT_LABEL]
    FontSize=12
    FontColor=[Background2],255
    FontEffectColor=#LabelColor#
    FontWeight=900
    StringAlign=Center
    X=(#LabelWidth#/2)+#SidebarWidth#
    
[COLUMN_2]
    X=(((#Width#-#LeftOffset#)/#Columns#)*1)+#LeftOffset#
    StringCase=UPPER
    Group="COLUMN_2"
    
[COLUMN_25]
    X=((((#Width#-#LeftOffset#)/#Columns#)*1.65)+#LeftOffset#)*#HideMe4#
    StringCase=UPPER
    Group="COLUMN_4"
    
[COLUMN_3]
    X=((((#Width#-#LeftOffset#)/#Columns#)*2)+#LeftOffset#)*#HideMe3#
    StringCase=UPPER
    Group="COLUMN_3"
    
[COLUMN_35]
    X=((((#Width#-#LeftOffset#)/#Columns#)*2.5)+#LeftOffset#)*#HideMe4#
    StringCase=UPPER
    Group="COLUMN_4"
    
[COLUMN_4]
    X=((((#Width#-#LeftOffset#)/#Columns#)*3)+#LeftOffset#)*#HideMe4#
    StringCase=UPPER
    Group="COLUMN_4"
    
[COLUMN_45]
    X=((((#Width#-#LeftOffset#)/#Columns#)*3.25)+#LeftOffset#)*#HideMe4#
    StringCase=UPPER
    Group="COLUMN_4"
    
[COLUMN_5]
    X=((((#Width#-#LeftOffset#)/#Columns#)*4)+#LeftOffset#)*#HideMe5#
    StringCase=UPPER
    Group="COLUMN_5"
    
[COLUMN_55]
    X=((((#Width#-#LeftOffset#)/#Columns#)*4.25)+#LeftOffset#)*#HideMe5#
    StringCase=UPPER
    Group="COLUMN_5"
    
[COLUMN_6]
    X=((((#Width#-#LeftOffset#)/#Columns#)*5)+#LeftOffset#)*#HideMe6#
    StringCase=UPPER
    Group="COLUMN_6"
    
[COLUMN_SPLIT]
    X=(((#Width#-#LeftOffset#)/#Columns#)*Round(#Columns#/2))+#LeftOffset#
    StringCase=UPPER
    
[DIVIDER]
    X=((#Width#-#LeftOffset#-#RightPadding#)/2)+#LeftOffset#+#DividerOffset#
    
[VISUALIZER_BAR]
    BarOrientation=Vertical
    DynamicVariables=1
    AntiAlias=1
    BarColor=#AccentColor#
    DynamicVariables=1
    Y=0
    W=10
    H=(#WORKAREAHEIGHT#*0.75)
	
[LAUNCHER_ICON]
	H=#IconSize#
	X=35
	ImageAlpha=215
	ImageTint=#LabelColor#