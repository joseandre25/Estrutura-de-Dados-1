/*Aplique estruturas de decisão e laços para verificar se um
número fornecido pelo usuário é primo ou não.*/

#include <stdio.h>
#include <math.h>

int main() {
    int numero, i;
    int ehPrimo = 1; 

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("%d não é um número primo.\n", numero);
    } else {
        for (i = 2; i <= sqrt(numero); i++) {
            if (numero % i == 0) {
                ehPrimo = 0; 
                break;
            }
        }

        if (ehPrimo)
            printf("%d é um número primo.\n", numero);
        else
            printf("%d não é um número primo.\n", numero);
    }

    return 0;
}

