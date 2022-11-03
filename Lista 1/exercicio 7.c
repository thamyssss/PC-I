#include <stdio.h>
#include <math.h>


void main()

{
    float X,Y,Z,Med;

    printf("Digite um numero nao inteiro:\n");
    scanf("%f",&X);

    printf("Digite outro numero nao inteiro:\n");
    scanf("%f",&Y);

    printf("Digite mais um numero nao inteiro:\n");
    scanf("%f",&Z);

    Med = (X+Y+Z)/3;

    printf("A media dos numeros e %.2f\n",Med);

    if(X>=Y && X>Z)

       {
           if(Y>Z)
           printf("O maior numero e %.2f e o menor e %.2f\n",X,Z);

           else
           printf("O maior numero e %.2f e o menor e %.2f\n",X,Y);
       }


    else if(Y>X && Y>=Z)

        {
           if(X>Z)
           printf("O maior numero e %.2f e o menor e %.2f\n",Y,Z);

           else
           printf("O maior numero e %.2f e o menor e %.2f\n",Y,X);
       }

    else if(Z>=X && Z>Y)

        {
           if(X>Y)
           printf("O maior numero e %.2f e o menor e %.2f\n",Z,Y);

           else
           printf("O maior numero e %.2f e o menor e %.2f\n",Z,X);
       }

    else

        printf("Os numeros sao iguais\n",X);

}
