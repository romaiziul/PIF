#include <stdio.h>
#define TAM 6
typedef enum { PENDENTE,PAGO,ENTREGUE } Status;
typedef struct { int codigo; float valor; Status status; } Pedido;
const char *nomeStatus(Status s);
int main(void) {
    Pedido pedidos[TAM];
    int codigo,novo,encontrado=0;
    int quantidade[3]={0};
    float totais[3]={0};
    for(int i=0;i<TAM;i++) {
        int status;
        printf("Pedido %d: codigo, valor e status (0 pendente, 1 pago, 2 entregue): ",i+1);
        if(scanf("%d %f %d",&pedidos[i].codigo,&pedidos[i].valor,&status)!=3||
           pedidos[i].valor<0||status<0||status>2) { puts("Dados invalidos."); return 1; }
        for(int j=0;j<i;j++) if(pedidos[i].codigo==pedidos[j].codigo) { puts("Codigo repetido."); return 1; }
        pedidos[i].status=(Status)status;
    }
    printf("Codigo do pedido a alterar: ");
    if(scanf("%d",&codigo)!=1) return 1;
    printf("Novo status (0, 1 ou 2): ");
    if(scanf("%d",&novo)!=1||novo<0||novo>2) { puts("Status invalido."); return 1; }
    for(int i=0;i<TAM;i++) if(pedidos[i].codigo==codigo) {
        pedidos[i].status=(Status)novo;
        encontrado=1;
        break;
    }
    if(!encontrado) puts("Pedido nao encontrado.");
    for(int i=0;i<TAM;i++) {
        quantidade[pedidos[i].status]++;
        totais[pedidos[i].status]+=pedidos[i].valor;
    }
    for(int s=PENDENTE;s<=ENTREGUE;s++) printf("%s: %d pedidos, R$ %.2f\n",nomeStatus((Status)s),quantidade[s],totais[s]);
    return 0;
}
const char *nomeStatus(Status s) {
    switch(s) { case PENDENTE:return "Pendente"; case PAGO:return "Pago"; case ENTREGUE:return "Entregue"; }
    return "Desconhecido";
}
