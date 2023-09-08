/*Implemente um menu com três opções: C - Fahrenheit para
Celsius, F - Celsius para Fahrenheit e S - Sair. Depois que o
usuário optar por uma das duas primeiras opções, leia um valor
float e mostre seu valor na respectiva escala. Caso o usuário
opte pela opção S, encerre o programa.*/

#include <stdio.h>

int main()
{
    char op, op2;
    float n, vf;

    printf("***********CONVERSOR DE TEMPERATURAS***********\n");

    do
    {
        printf("Digite 'C' para converter um valor Fahrenheit para Celsius\n");
        printf("ou 'F' para converter um valor Celsius para Fahrenheit: ");
        scanf(" %c", &op);

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &n);

        switch (op)
        {
        case 'F':
            vf = n * 1.8 + 32;
            printf("%.2f°C é igual a %.2f°F\n", n, vf);
            break;
        case 'C':
            vf = (n - 32) / 1.8;
            printf("%.2f°F é igual a %.2f°C\n", n, vf);
            break;
        default:
            printf("Valor inválido.");
            break;
        }

        printf("Tecle qualquer tecla para continuar ou digite 'S' para sair\n");
        scanf(" %c", &op2);

    } while (op2 != 'S');

    return 0;
}
