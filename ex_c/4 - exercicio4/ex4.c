#include <stdio.h>

int main() {
    float saldo, cheque;

    printf("Insira o saldo inicial: ");
    scanf("%f", &saldo);
    printf("Insira o valor do cheque: ");
    scanf("%f", &cheque);

    if (cheque > saldo) {
        printf("Cheque nao pode ser descontado.\n");
    } else {
        saldo -= cheque;
        printf("Cheque descontado. Saldo atual: %.2f\n", saldo);
    }

    return 0;
}