#include <stdio.h>
float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);
int main(void) {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;
    printf("Preco: R$ ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    printf("Pagamento (1 a vista; outra opcao sem desconto): ");
    scanf("%d", &opcaoPagamento);
    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);
    printf("Subtotal = R$ %.2f\nTotal = R$ %.2f\n", subtotal, total);
    printf("Valor pago: R$ ");
    scanf("%f", &pago);
    troco = calculaTroco(total, pago);
    if (troco >= 0.0f) printf("Troco = R$ %.2f\n", troco);
    else printf("Faltam R$ %.2f\n", -troco);
    return 0;
}
float calculaSubtotal(float preco, int quantidade) { return preco * quantidade; }
float aplicaDesconto(float valor, int opcaoPagamento) {
    return opcaoPagamento == 1 ? valor * 0.90f : valor;
}
float calculaTroco(float total, float pago) { return pago - total; }
