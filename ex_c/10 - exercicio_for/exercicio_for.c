#include <stdio.h>

int main(){

    int *numeros = malloc(10 * sizeof(int));
    int *pares = malloc(10 * sizeof(int));
    int *impares = malloc(10 * sizeof(int));
    int quantidade_num_pares = 0, quantidade_num_impares = 0;

    for (int i = 0; i < 10; i++){
        printf("Insira um %d numero", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[quantidade_num_pares] = numeros[i];
            quantidade_num_pares++;
        }
        else {
            impares[quantidade_num_impares] = numeros[i];
            quantidade_num_impares++;
        }
    }

    printf("Numeros pares: ");
    for (int i = 0; i < quantidade_num_pares; i++){
        printf("%d ", pares[i]);
    }
    printf("Numeros impares: ");
    for (int i = 0; i < quantidade_num_impares; i++){
        printf("%d ", impares[i]);
    }

    free(numeros);
    free(pares);
    free(impares);

    return 0;
}