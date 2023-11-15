#include <windows.h>
#include <stdio.h>
#include <sys/time.h>
#include "wapi.h"
#include "wext.h"
#include <windows.h>
#include <stdio.h>
#include "../wapi/wapi.h"
#include "../wapi/wext.h"

 

int main() {
     if (wOpen("192.168.1.129") != WSUCCESS) {
          printf("Error wOpen\n");
          return -1;
     }

     float ch = 0.5;
     wSetTokenFloat(CH_2_SEND_2_LVL, ch);
     Sleep(1);
     wClose();
     return 0;

}

// gcc -O3 -Wall -I:C:\Users\rschl\OneDrive\Dokumente\GitHub\wapi -c -o wtest.o "wtest.c" 
// gcc  -LC:\Users\rschl\OneDrive\Dokumente\GitHub\wapi\Windows -o wtest.exe wtest.o -lwapi -lws2_32