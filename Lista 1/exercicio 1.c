#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main()

{
    int A, B, C;

    setlocale(LC_ALL,"PORTUGUESE");

    printf("Para formar um tri�ngulo, digite um n�mero inteiro maior que 0:\n");
    scanf("%d",&A);

    printf("Para formar um tri�ngulo, digite outro n�mero inteiro maior que 0:\n");
    scanf("%d",&B);

    printf("Para formar um tri�ngulo, digite um �ltimo n�mero inteiro maior que 0:\n");
    scanf("%d",&C);


        if(A==0 || B==0 || C==0)
    {
        printf("Por favor, digite um n�mero maior que 0. N�o existe tri�ngulo com lado zero!");
        return 0;
    }


     if(A>B+C || B>A+C || C>A+B)
    {
        printf("Estes n�meros n�o formam um tri�ngulo");
        return 0;
    }



    if(A<B+C || B<A+C || C<A+B)

    {
        if(A==B && B==C)
        {
            printf("Os lados %0.d, %0.d e %0.d formam um tri�ngulo equil�tero", A,B,C);
        }

        if(A==B && B!=C || B==C && B!=A || C==A && C!=B)
        {
            printf("Os lados %0.d, %0.d e %0.d formam um tri�ngulo is�sceles", A,B,C);
        }

        if(A!=B && B!=C && C!=A)
        {
            printf("Os lados %0.d, %0.d e %0.d formam um tri�ngulo escaleno", A,B,C);
        }
    }

}
