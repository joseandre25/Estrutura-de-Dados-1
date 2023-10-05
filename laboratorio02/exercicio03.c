/*Seja pvetcar um vetor não ordenado contendo valores do tipo char; 
ptammax, um valor inteiro indicando a quantidade de elementos alocados em pvetcar 
e pqtde, um valor inteiro indicando a quantidade atual de elementos em pvetcar. 
Escreva as funções solicitadas abaixo considerando que pvetcar, ptammax e pqtde
sejam parâmetros de entrada das mesmas:
a. Faça uma função que receba um caracter e o inclua na primeira posição disponível de pvetcar;
b. Faça uma função que receba um caracter e o exclua de pvetcar;*/

#include <stdio.h> 

void incluiChar(char pvetcar, int ptammax, int pqtde){

    char pvetcar[ptammax];

    printf("char a ser inserido: ");
    char c;
    scanf(" %c", &c);
}

int main()
{
    int ptammax, pqtde;

    scanf("%d", &ptammax);
    char pvetcar[ptammax];

    for (int i = 0; i < ptammax; i++)
    {
        scanf(" %c", &pvetcar[i]);
    }
    
    return 0;
}
