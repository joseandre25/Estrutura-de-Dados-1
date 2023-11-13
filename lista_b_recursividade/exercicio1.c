#include <stdio.h>

int somaDigitos(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return n % 10 + somaDigitos(n / 10);
    }
}

int main()
{
    int n;
    printf("Digite o número: ");
    scanf("%d", &n);
    int resultado = somaDigitos(n);
    printf("A soma dos digitos de %d é igual a %d\n", n, resultado);

    return 0;
}
