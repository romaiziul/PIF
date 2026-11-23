#include <stdio.h>
#include "areas.h"
int main(void) {
    float raio,base,altura;
    printf("Raio do circulo: ");
    if(scanf("%f",&raio)!=1||raio<0) return 1;
    printf("Base e altura do retangulo/triangulo: ");
    if(scanf("%f %f",&base,&altura)!=2||base<0||altura<0) return 1;
    printf("Circulo = %.2f\n",A_CIRC(raio));
    printf("Retangulo = %.2f\n",A_RET(base,altura));
    printf("Triangulo = %.2f\n",A_TRI(base,altura));
    return 0;
}
