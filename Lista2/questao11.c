#include <stdio.h> 

int main(void) { 
    const double PI = 3.141593; 
    double graus, rad; 
    
    printf("Digite o ângulo em graus: "); 
    scanf("%lf", &graus); 
    
    rad = graus * (PI / 180.0); 
    
    printf("Radianos: %.6lf\n", rad); 
    
    return 0; 
}