#include <stdio.h>
#include <math.h>
#include <locale.h>

void main()

{
    float p, inf;

    setlocale(LC_ALL,"PORTUGUESE");

    printf("Digite o pre�o do produto:\n");
    scanf("%f",&p);

    if(p>100)

    {
        inf = p + (0.10*p);
        printf("O pre�o inflacionado desse produto em 10% � %.2f reais",inf);

    }

    else

    {
        inf = p + (0.20*p);
        printf("O pre�o inflacionado desse produto em 20% � %.2f reais",inf);
    }

}
