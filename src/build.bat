@ECHO OFF
SET PATH=C:\Tools\MiniGW\bin;C:\Tools\MiniGW\msys\1.0\bin;C:\Tools\Python27;C:\Tools\GnuARM\4.9-2015-q2\bin;%PATH%

rem make clean
make %* TARGET=OPENMV1
