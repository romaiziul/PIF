#include <stdio.h>
#define N 3
void imprimeMatriz(int m[N][N]);
int main(void) {
    int a[N][N],b[N][N],c[N][N];
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) { printf("A[%d][%d]: ",i,j); if(scanf("%d",&a[i][j])!=1) return 1; }
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) { printf("B[%d][%d]: ",i,j); if(scanf("%d",&b[i][j])!=1) return 1; c[i][j]=a[i][j]+b[i][j]; }
    puts("Matriz A:"); imprimeMatriz(a);
    puts("Matriz B:"); imprimeMatriz(b);
    puts("Matriz soma:"); imprimeMatriz(c);
    return 0;
}
void imprimeMatriz(int m[N][N]) {
    for(int i=0;i<N;i++) { for(int j=0;j<N;j++) printf("%6d",m[i][j]); putchar('\n'); }
}
