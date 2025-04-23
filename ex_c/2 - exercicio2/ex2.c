#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, num3 = 0;
    int maior = 0, menor = 0;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    printf("Insira o terceiro numero: ");
    scanf("%d", &num3);

    maior = num1;
    menor = num1;
    
    if (num2 > maior) maior = num2;
    if (num3 > maior) maior = num3;
    if (num2 < menor) menor = num2;
    if (num3 > menor) menor = num3;
    
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
