#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()

{
    float p, inf;

    setlocale(LC_ALL,"PORTUGUESE");

    printf("Digite o preço do produto:\n");
    scanf("%f",&p);

    if(p>100)

    {
        inf = p + (0.10*p);
        printf("O preço inflacionado desse produto em 10% é %.2f reais",inf);

    }

    else

    {
        inf = p + (0.20*p);
        printf("O preço inflacionado desse produto em 20% é %.2f reais",inf);
    }

}
