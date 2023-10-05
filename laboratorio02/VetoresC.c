// Exercicio 01

#include <stdio.h>

int criaVetInt(int N){
    int *ptrN;
   
    int Y[N];
    ptrN = &Y[N];

    printf("%p\n", ptrN);

    return 0;
}

float criaVetFloat(int X){
    float *ptrX;

    float Z[X];
    ptrX = &Z[X];

    printf("%p\n", ptrX);

    return 0;
}

int main()
{
    int N, X;

    scanf("%d", &N);
    criaVetInt(N);

    scanf("%d", &X);
    criaVetFloat(X);

    return 0;
}
