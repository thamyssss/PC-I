#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()

{
    int S, horas, minutos, segundos;

    setlocale(LC_ALL,"PORTUGUESE");

    printf("Digite um n�mero inteiro de segundos:\n");
    scanf("%d",&S);

    horas = S/3600;
    minutos = S/60;
    segundos = S;

    printf("O n�mero %d corresponde � %d horas, %d minutos e %d segundos",S,horas,minutos,segundos);

}
