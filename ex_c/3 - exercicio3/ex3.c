#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        printf("Crescente: %d %d\n", num1, num2);
        printf("Decrescente: %d %d\n", num2, num1);
    } else {
        printf("Crescente: %d %d\n", num2, num1);
        printf("Decrescente: %d %d\n", num1, num2);
    }

    return 0;
}