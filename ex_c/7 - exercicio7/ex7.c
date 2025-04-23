#include <stdio.h>

int main() {
    float prova1, prova2, prova3, media;

    printf("Insira a nota da primeira prova: ");
    scanf("%f", &prova1);
    printf("Insira a nota da segunda prova: ");
    scanf("%f", &prova2);
    printf("Insira a nota da terceira prova: ");
    scanf("%f", &prova3);

    media = (prova1 * 2 + prova2 * 3 + prova3 * 5) / 10;
    printf("A sua media e: %.2f", media);
    if (media >= 6) {
        printf("\nAPROVADO\n");
    } else {
        printf("\nREPROVADO\n");
    }

    return 0;
}