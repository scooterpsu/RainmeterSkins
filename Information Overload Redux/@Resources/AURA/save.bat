IF EXIST "%PROGRAMFILES(X86)%" (GOTO 64bit) ELSE (GOTO 32bit)
:64bit
SET asusprofile=%programfiles(x86)%\LightingService\LastProfile.xml
GOTO begin

:32bit
SET asusprofile=%programfiles%\LightingService\LastProfile.xml

:begin
copy /Y "%asusprofile%" "%1" > nul