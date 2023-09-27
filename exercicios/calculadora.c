/*Usando as estruturas condicionais e de repetição (implemente
um menu), crie um programa de calculadora que lê operações e
valores do usuário e mostre o resultado na tela.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char s, c;
    float n1, n2, nf;

    printf("BEM-VINDO À CALCULADORA\n");
    
    do
    {  
        printf("Digite o primeiro número: \n");
        scanf("%f", &n1);

        printf("Digite a operação a ser realizada (+, -, *, /): \n");
        scanf(" %c", &c);

        printf("Digite o segundo número: \n");
        scanf("%f", &n2);

        switch (c)
        {
        case '+':
            nf = n1 + n2;
            printf("O resultado da soma entre %.2f e %.2f é igual a %.2f\n", n1, n2, nf);
            break;
        case '-':
            nf = n1 - n2;
            printf("O resultado da subtração entre %.2f e %.2f é igual a %.2f\n", n1, n2, nf);
            break;
        case '*':
            nf = n1 * n2;
            printf("O resultado da multiplicação entre %.2f e %.2f é igual a %.2f\n", n1, n2, nf);
            break;
        case '/':
            nf = n1 / n2;
            printf("O resultado da divisão entre %.2f e %.2f é igual a %.2f\n", n1, n2, nf);
            break;
        default:
            printf("Operador inválido\n");
            break;
        }

        printf("Digite S para parar a calculadora ou qualquer tecla para continuar realizando operações\n");
        scanf(" %c", &s);
    } while (s != 'S');
    
    return 0;
}
