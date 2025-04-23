#include <stdio.h>

int main(){

    float notas[10];
    float soma = 0.0, media;
    int alunos_acima_da_media = 0;

    for (int i = 0; i < 10; i++){
        printf("Insira a nota do aluno %d (de 0 a 20): ", i + 1);
        scanf("%f", &notas[i]);

        while (notas[i] < 0 || notas[i] > 20){
           printf("Insira notas apenas de 0 a 20: ", i +1);
           scanf("%f", &notas[i]);
        }
        soma += notas[i];
    }

    media = soma / 10;

    for (int a = 0; a < 10; a++){
        if (notas[a] >= media){
            alunos_acima_da_media++;
        }
    }

    printf("A media da turma e %.2f\n", media);
    printf("Numero de alunos com nota igual ou maior a media: %d\n", alunos_acima_da_media);

    return 0;
}