#include <stdio.h>
#include <stdlib.h>

void main()

{
    int cont, ant, prox, soma; /*Seq. de fibonacci: 1 1 3 5 8...// ant = n� antes, prox = n� depois
                                soma = n� antes + n� depois
                                exemplo: 1(ant)+1(depois) = 3(soma)*/

    ant=0;
    prox=1;

    for(cont=0; cont<20; cont++)

    {
        soma = ant+prox;

        printf("%d\n",soma);

        ant = prox;
        prox = soma;

    }

}
