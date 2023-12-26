#include <windows.h>
#include <stdio.h>
#include <sys/time.h>
#include "wapi.h"
#include "wext.h"
#include "../wapi/wapi.h"
#include "../wapi/wext.h"


// Time Import
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <stdlib.h>

// Code Runner:
// "c": "cd $dir && call run_from_curr_dir.bat"
int main() {
     
     printf("Starting Script...\n");
     system("connect_mischpult.bat");
     //system("connect_huawei.bat");
     Sleep(2000);

     if (wOpen("192.167.0.100") != WSUCCESS) {
          printf("Error wOpen\n");
          Sleep(1000);
          return -1;
     }
     printf("Connection Established!\n");
     
     //float ch = 2;    
     //wSetTokenFloat(CH_31_SEND_1, ch);
     wvalue value;
     wtype type;

     float ch = 0;
     wSetTokenFloat(CH_31_MAIN_1_LVL, ch);
     // CH_31_MAIN_1_LVL
     wGetToken(CH_31_$FDR, &type, &value);

     printf("type = %i, data = %f\n", type, value.fval);
     
     //myChar = wGetName(CH_31_$FDR);
     //myChar = *(wGetName(CH_31_$FDR));  // Dereferencing the pointer to get the character
     // extern int wGetTokenFloat(wtoken tokenval, float *fval); 
     //float faderPosition = wGetTokenFloat(CH_31_$FDR);

     //float fval;
     //int result = wGetTokenFloat(CH_1_SEND_16_LVL, &fval);

     //printf("Fader position: %f\n", result);

     printf("Finished Commands\n");

     Sleep(1000);
     wClose();

     printf("Closing Connection...\n");
     system("connect_huawei.bat");
     Sleep(5000);



     return 0;

}

// gcc -O3 -Wall -I:C:\Users\rschl\OneDrive\Dokumente\GitHub\wapi -c -o wtest.o "wtest.c" 
// gcc  -LC:\Users\rschl\OneDrive\Dokumente\GitHub\wapi\Windows -o wtest.exe wtest.o -lwapi -lws2_32