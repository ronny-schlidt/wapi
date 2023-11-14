#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

// gcc -O3 -Wall -I:C:\Users\rschl\OneDrive\Dokumente\GitHub\wapi -c -o wtest.o "wtest.c" 
// gcc "-LC:C:\Users\rschl\OneDrive\Dokumente\GitHub\wapi\Windows" -o wtest.exe wtest.o -lwapi -lws2_32