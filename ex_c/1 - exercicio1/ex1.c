#include <stdio.h>

int main(){

    int segundos = 0;
    int horas = 0;
    int minutos = 0;
    int segundos_restantes = 0;

    printf("Insira um numero em segundos:\n");
    scanf("%d", &segundos);

    horas = segundos/3600;
    minutos = (segundos % 3600) / 60;
    segundos_restantes = segundos % 60;

    printf("%d segundos é: %d horas, %d minutos e %d segundos\n", segundos, horas, minutos, segundos_restantes );


    return 0;
}