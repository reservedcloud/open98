@echo off
set /P id=Enter commit message: 
git add ./
git commit -a -m %id%
git push -u origin master
pause