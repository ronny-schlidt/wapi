#include <windows.h>
#include <stdio.h>
#include <sys/time.h>
#include "wapi.h"
#include "wext.h"

int main() {

    wOpen("192.169.23.23");
    
    float ch2bus2lvl = 0.5;
    wSetTokenFloat(CH_2_SEND_2_LVL, ch2bus2lvl);

    wClose();
    return 0;
}

// gcc -O3 -Wall -I:C:\Users\rschl\OneDrive\Dokumente\GitHub\wapi -c -o wtest.o "wtest.c" 
// gcc "-LC:C:\Users\rschl\OneDrive\Dokumente\GitHub\wapi\Windows" -o wtest.exe wtest.o -lwapi -lws2_32
