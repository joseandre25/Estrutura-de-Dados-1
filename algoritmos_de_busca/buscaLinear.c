#include <stdio.h>

int buscaLinear(int array[], int tamanho, int chave)
{

    for (int i = 0; i < tamanho; i++)
    {
        if (array[i] == chave)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n, elemento;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int meuArray[n];
    printf("Digite os elementos do vetor: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &meuArray[i]);
    }
    
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

    printf("Digite o elemento que você quer buscar: ");
    scanf("%d", &elemento);

    int resultado = buscaLinear(meuArray, tamanho, elemento);

    if (resultado != -1)
    {
        printf("O elemento %d está no índice %d do vetor\n", elemento, resultado);
    } else {
        printf("Elemento não encontrado");
    }
    return 0;
}
