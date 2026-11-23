#include <stdio.h>
#define PI 3.14159265f
float area(float r);
int main(void) { float r; printf("Raio: "); if(scanf("%f",&r)!=1 || r<0) { puts("Raio invalido."); return 1; } printf("Area = %.2f\n",area(r)); return 0; }
float area(float r) { return 4.0f*PI*r*r; }
