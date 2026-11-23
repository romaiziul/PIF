#include <stdio.h>
float celsius(float fahr);
int main(void) { float f; printf("Fahrenheit: "); if(scanf("%f",&f)!=1) return 1; printf("Celsius = %.2f\n",celsius(f)); return 0; }
float celsius(float fahr) { return (fahr-32.0f)*5.0f/9.0f; }
