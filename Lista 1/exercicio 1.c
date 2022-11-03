#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()

{
    int A, B, C;

    setlocale(LC_ALL,"PORTUGUESE");

    printf("Para formar um triângulo, digite um número inteiro maior que 0:\n");
    scanf("%d",&A);

    printf("Para formar um triângulo, digite outro número inteiro maior que 0:\n");
    scanf("%d",&B);

    printf("Para formar um triângulo, digite um último número inteiro maior que 0:\n");
    scanf("%d",&C);


        if(A==0 || B==0 || C==0)
    {
        printf("Por favor, digite um número maior que 0. Não existe triângulo com lado zero!");
        return 0;
    }


     if(A>B+C || B>A+C || C>A+B)
    {
        printf("Estes números não formam um triângulo");
        return 0;
    }



    if(A<B+C || B<A+C || C<A+B)

    {
        if(A==B && B==C)
        {
            printf("Os lados %0.d, %0.d e %0.d formam um triângulo equilátero", A,B,C);
        }

        if(A==B && B!=C || B==C && B!=A || C==A && C!=B)
        {
            printf("Os lados %0.d, %0.d e %0.d formam um triângulo isósceles", A,B,C);
        }

        if(A!=B && B!=C && C!=A)
        {
            printf("Os lados %0.d, %0.d e %0.d formam um triângulo escaleno", A,B,C);
        }
    }

}
