#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    long i, n, fat=1;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&n);

    for(i=n; i>=1; i--)

    {
        fat = fat * i;

    }

    printf("O fatorial de %d e %d\n", n, fat);
}
