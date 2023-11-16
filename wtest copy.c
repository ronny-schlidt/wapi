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
     printf("Starting Script...\n");
     if (wOpen("192.167.0.100") != WSUCCESS) {
          printf("Error wOpen\n");
          return -1;
     }
     printf("Connection Established!");
     
     float ch = 0.5;
     wSetTokenFloat(CH_1_SEND_16_LVL, ch);

     printf("Finished Commands");
     Sleep(1);
     wClose();

     printf("Closing Connection...");
     return 0;

}

// gcc -O3 -Wall -I:C:\Users\rschl\OneDrive\Dokumente\GitHub\wapi -c -o wtest.o "wtest.c" 
// gcc  -LC:\Users\rschl\OneDrive\Dokumente\GitHub\wapi\Windows -o wtest.exe wtest.o -lwapi -lws2_32