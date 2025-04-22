#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    printf("Insira o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 <= num2 && num1 <= num3) {
        if (num2 <= num3) {
            printf("Crescente: %d %d %d\n", num1, num2, num3);
            printf("Decrescente: %d %d %d\n", num3, num2, num1);
        } else {
            printf("Crescente: %d %d %d\n", num1, num3, num2);
            printf("Decrescente: %d %d %d\n", num2, num3, num1);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        if (num1 <= num3) {
            printf("Crescente: %d %d %d\n", num2, num1, num3);
            printf("Decrescente: %d %d %d\n", num3, num1, num2);
        } else {
            printf("Crescente: %d %d %d\n", num2, num3, num1);
            printf("Decrescente: %d %d %d\n", num1, num3, num2);
        }
    } else {
        if (num1 <= num2) {
            printf("Crescente: %d %d %d\n", num3, num1, num2);
            printf("Decrescente: %d %d %d\n", num2, num1, num3);
        } else {
            printf("Crescente: %d %d %d\n", num3, num2, num1);
            printf("Decrescente: %d %d %d\n", num1, num2, num3);
        }
    }

    return 0;
}