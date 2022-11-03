#include <stdio.h>
#include <math.h>

void main()

{
    float X,Y,S,P,Q,R;

    printf("Digite um numero real ou inteiro:\n");
    scanf("%f",&X);

    printf("Digite mais um numero real ou inteiro:\n");
    scanf("%f",&Y);

    S = X+Y;
    P = X*(pow(Y,2));
    Q = pow(X,2);
    R = sqrt(Q + pow(Y,2));

    printf("A soma dos dois numeros e: %0.2f\n",S);
    printf("O produto do primeiro numero pelo quadrado do segundo e: %0.2f\n",P);
    printf("O quadrado do primeiro numero e: %0.2f\n",Q);
    printf("A raiz quadrada da soma dos quadrados dos numeros e: %0.2f\n",R);
}
