#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LANCAMENTOS 30
int main(void) {
    int dado[LANCAMENTOS],freq[6]={0};
    srand((unsigned)time(NULL));
    for(int i=0;i<LANCAMENTOS;i++) {
        dado[i]=rand()%6+1;
        freq[dado[i]-1]++;
    }
    for(int i=0;i<6;i++) printf("Face %d: %d vezes\n",i+1,freq[i]);
    return 0;
}
