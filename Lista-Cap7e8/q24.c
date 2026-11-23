#include <stdio.h>
#include <string.h>
#define TAM 5
typedef struct { char alimento[70]; float peso; float calorias; } Dieta;
int main(void) {
    Dieta itens[TAM];
    float total=0;
    int maisCalorico=0;
    for(int i=0;i<TAM;i++) {
        printf("Alimento %d: ",i+1);
        if(fgets(itens[i].alimento,sizeof(itens[i].alimento),stdin)==NULL) return 1;
        itens[i].alimento[strcspn(itens[i].alimento,"\n")]='\0';
        printf("Peso da porcao (g) e calorias da porcao: ");
        if(scanf("%f %f",&itens[i].peso,&itens[i].calorias)!=2||itens[i].peso<0||itens[i].calorias<0) {
            puts("Dados invalidos."); return 1;
        }
        int c; while((c=getchar())!='\n'&&c!=EOF) {}
        total+=itens[i].calorias;
        if(itens[i].calorias>itens[maisCalorico].calorias) maisCalorico=i;
    }
    for(int i=0;i<TAM;i++) printf("%s - %.1f g - %.1f kcal\n",itens[i].alimento,itens[i].peso,itens[i].calorias);
    printf("Total: %.1f kcal\nMais calorico: %s\n",total,itens[maisCalorico].alimento);
    return 0;
}
