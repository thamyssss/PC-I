#include <stdio.h>
#include <locale.h>

void main()

{
    int X;

    setlocale(LC_ALL,"PORTUGUESE");

    printf("Digite um n�mero inteiro:\n");
    scanf("%d",&X);

    if(X==0)

    {
        printf("O n�mero %d n�o � positivo nem negativo e � par",X);
    }


    else if(X>0)

    {
        if(X%2!=0)
           printf("O n�mero %d � positivo e �mpar\n",X);

        else
          printf("O n�mero %d � positivo e par\n",X);

    }

    else if(X<0)

    {
        if(X%2!=0)
           printf("O n�mero %d � negativo e �mpar\n",X);

        else
          printf("O n�mero %d � negativo e par\n",X);
    }
}
