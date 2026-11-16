#include <stdio.h>
#define PI 3.14159f
float area(float r);
int main(void) {
    float raio;
    printf("Raio da esfera: ");
    scanf("%f", &raio);
    printf("Area = %.2f\n", area(raio));
    return 0;
}
float area(float r) { return 4.0f * PI * r * r; }
