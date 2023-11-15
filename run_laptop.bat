
REM Compile wtest.c to wtest.o
gcc -O3 -Wall -I"C:\Users\rschl\OneDrive\Dokumente\GitHub\wapi" -c -o wtest.o "wtest.c"

REM Link wtest.o to create wtest.exe
gcc -LC:\Users\rschl\OneDrive\Dokumente\GitHub\wapi\Windows -o wtest.exe wtest.o -lwapi -lws2_32

pause