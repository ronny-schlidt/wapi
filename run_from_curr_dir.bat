REM Compile wtest.c to wtest.o
gcc -O3 -Wall -I. -c -o wtest.o "wtest.c"

REM Link wtest.o to create wtest.exe
gcc -LWindows -o wtest.exe wtest.o -lwapi -lws2_32

start wtest.exe