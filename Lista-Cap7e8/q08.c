#include <stdio.h>
int main(void) {
    int a[3][4],t[4][3];
    for(int i=0;i<3;i++) for(int j=0;j<4;j++) {
        printf("Matriz[%d][%d]: ",i,j);
        if(scanf("%d",&a[i][j])!=1) return 1;
        t[j][i]=a[i][j];
    }
    puts("Original (3x4):");
    for(int i=0;i<3;i++) { for(int j=0;j<4;j++) printf("%5d",a[i][j]); putchar('\n'); }
    puts("Transposta (4x3):");
    for(int i=0;i<4;i++) { for(int j=0;j<3;j++) printf("%5d",t[i][j]); putchar('\n'); }
    return 0;
}
