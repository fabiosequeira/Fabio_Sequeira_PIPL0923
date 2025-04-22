#include <stdio.h>

int main(){

    int segundos;
    printf("Insira um numero em segundos:\n");
    scanf("%d", &segundos);

    int horas = segundos/3600;
    int minutos_sobram = (segundos % 3600) / 60;
    int segundos_sobram = segundos % 60;

    printf("%d segundos é: %d horas, %d minutos e %d segundos\n", segundos, horas, minutos_sobram, segundos_sobram);


    return 0;
}