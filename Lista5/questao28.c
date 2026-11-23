#include <stdio.h>
float calculaSubtotal(float preco,int quantidade);
float aplicaDesconto(float valor,int opcaoPagamento);
float calculaTroco(float total,float pago);
int main(void) {
    float preco,subtotal,total,pago,troco;
    int quantidade,opcao;
    printf("Preco e quantidade: ");
    if(scanf("%f %d",&preco,&quantidade)!=2||preco<0||quantidade<=0) { puts("Dados invalidos."); return 1; }
    puts("Forma de pagamento: 1 - A vista (10%% de desconto), 2 - Outro");
    printf("Opcao: ");
    if(scanf("%d",&opcao)!=1||(opcao!=1&&opcao!=2)) { puts("Opcao invalida."); return 1; }
    subtotal=calculaSubtotal(preco,quantidade);
    total=aplicaDesconto(subtotal,opcao);
    printf("Valor pago: ");
    if(scanf("%f",&pago)!=1||pago<total) { puts("Pagamento insuficiente."); return 1; }
    troco=calculaTroco(total,pago);
    printf("Subtotal: R$ %.2f\nTotal: R$ %.2f\nTroco: R$ %.2f\n",subtotal,total,troco);
    return 0;
}
float calculaSubtotal(float preco,int quantidade) { return preco*quantidade; }
float aplicaDesconto(float valor,int opcaoPagamento) { return opcaoPagamento==1?valor*0.90f:valor; }
float calculaTroco(float total,float pago) { return pago-total; }
