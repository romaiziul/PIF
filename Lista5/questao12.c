#include <stdio.h>
void exibeMenu(void);
int main(void) { int op; exibeMenu(); printf("Opcao: "); if(scanf("%d",&op)!=1) return 1; switch(op) { case 1: puts("Cadastrar"); break; case 2: puts("Listar"); break; case 3: puts("Remover"); break; case 0: puts("Sair"); break; default: puts("Opcao invalida"); } return 0; }
void exibeMenu(void) { puts("1 - Cadastrar\n2 - Listar\n3 - Remover\n0 - Sair"); }
