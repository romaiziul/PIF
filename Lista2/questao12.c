#include <stdio.h> 

int main(void) { 
    int num, antec, suc; 
    
    printf("Digite um número inteiro: "); 
    scanf("%d", &num); 
    
    antec = --num; suc = ++num; suc++; 
    
    printf("Antecessor: %d\n", antec); 
    printf("Sucessor: %d\n", suc); 
    
    return 0; 
}