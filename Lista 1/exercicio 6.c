#include <stdio.h>
#include <locale.h>

void main()

{
    int X;

    setlocale(LC_ALL,"PORTUGUESE");

    printf("Digite um número inteiro:\n");
    scanf("%d",&X);

    if(X==0)

    {
        printf("O número %d não é positivo nem negativo e é par",X);
    }


    else if(X>0)

    {
        if(X%2!=0)
           printf("O número %d é positivo e ímpar\n",X);

        else
          printf("O número %d é positivo e par\n",X);

    }

    else if(X<0)

    {
        if(X%2!=0)
           printf("O número %d é negativo e ímpar\n",X);

        else
          printf("O número %d é negativo e par\n",X);
    }
}
