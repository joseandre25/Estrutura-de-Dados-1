// Escreva uma função recursiva que calcule o produto de dois 
// números inteiros positivos a e b, usando apenas somas e subtrações.

#include <stdio.h>
#include <stdlib.h>

int calculaProduto(int a, int b){

    if (a == 0 || b == 0)
    {
        return 0;
    } else if (b == 1)
    {
        return a;
    } else {
        return a + calculaProduto(a, b-1);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int resultado = calculaProduto(a, b);
    printf("O produto entre %d e %d é igual a %d\n", a, b, resultado);

    return 0;
}
