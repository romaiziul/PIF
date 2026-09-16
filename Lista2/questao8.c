#include <stdio.h> 

int main(void) { 
    int num, quadrado; 
    float dec; 
    
    printf("Digite um número inteiro: "); 
    scanf("%d", &num); 
    
    quadrado = num * num; 
    dec = num / 10.0; 
    
    printf("Quadrado: %d\n", quadrado); 
    printf("Décima parte: %.2f\n", dec); 
    
    return 0; 
}