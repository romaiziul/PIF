#include <stdio.h> 

int main(void) { 
    int numero; 
    
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero); 
    printf("\nDecimal: %d\n", numero); 
    printf("Hexadecimal: %x\n", numero); 
    printf("Octal: %o\n", numero); 
    
     printf("ASCII: %c\n", numero); 
    
    return 0; 
}