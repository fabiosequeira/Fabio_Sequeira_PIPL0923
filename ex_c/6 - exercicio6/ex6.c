#include <stdio.h>

int main() {
    char nome[100];
    float valorCompra, desconto, valorTotal;

    printf("Insira o nome do cliente: ");
    scanf("%s", nome);
    printf("Insira o valor da compra: ");
    scanf("%f", &valorCompra);

    if (valorCompra <= 200) {
        desconto = 0.10;
    } else if (valorCompra > 200 && valorCompra <= 500) {
        desconto = 0.15;
    } else {
        desconto = 0.20;
    }

    float valorDesconto = valorCompra * desconto;
    valorTotal = valorCompra - valorDesconto;

    printf("Nome do cliente: %s\n", nome);
    printf("Valor da compra: %.2f\n", valorCompra);
    printf("Percentagem de desconto: %.0f%%\n", desconto * 100);
    printf("Valor do desconto: %.2f\n", valorDesconto);
    printf("Valor total a pagar: %.2f\n", valorTotal);

    return 0;
}