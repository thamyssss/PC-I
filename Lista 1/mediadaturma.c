#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    float Med, N, i, soma;

    printf("Digite a nota dos 5 alunos:\n");

    for(i=0; i<5; i++)

    {
        scanf("%f",&N);
        soma+=N;
    }

    Med = soma/5;

    if(Med>=60)

    {
        printf("A turma esta acima da media\n");
    }

    else

        printf("A turma esta abaixo da media\n");

}
