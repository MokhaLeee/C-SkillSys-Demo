:: https://www.dostips.com/forum/viewtopic.php?f=3&t=409
@echo off

SET "TOOLS_DIR=C:\FE-Tools\"
SET "AA2=%TOOLS_DIR%AA2\AA2.py"
python %AA2% -i %~n1.txt

pause