#include <stdio.h> 

int main(void) { 
    float lado, base, altura; 
    
    printf("Digite o lado do quadrado: "); 
    scanf("%f", &lado); 
    
    printf("Área do quadrado: %.2f\n", lado * lado); 
    
    printf("\nDigite a base do retângulo: "); 
    scanf("%f", &base); 
    
    printf("Digite a altura do retângulo: "); 
    scanf("%f", &altura); 
    
    printf("Área do retângulo: %.2f\n", base * altura); 
    
    printf("\nDigite a base do triângulo: "); 
    scanf("%f", &base); 
    
    printf("Digite a altura do triângulo: "); 
    scanf("%f", &altura); 
    
    printf("Área do triângulo: %.2f\n", (base * altura) / 2.0); 

    return 0; }