#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
int main(void) {
    int m[N][N],principal=0,secundaria=0,acima=0;
    srand((unsigned)time(NULL));
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            m[i][j]=rand()%20+1;
            printf("%4d",m[i][j]);
            if(i==j) principal+=m[i][j];
            if(i+j==N-1) secundaria+=m[i][j];
            if(j>i) acima+=m[i][j];
        }
        putchar('\n');
    }
    printf("Diagonal principal: %d\nDiagonal secundaria: %d\nAcima da principal: %d\n",principal,secundaria,acima);
    return 0;
}
