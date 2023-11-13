#include <stdio.h>

int buscaBinaria(int array[], int tamanho, int chave)
{
    int inicio = 0, fim = tamanho - 1, i = 0;

    do
    {
        int meio = (inicio + fim) / 2;
        if (chave == array[meio])
        {
            return meio;
        }
        else if (chave > array[meio])
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    } while (chave != array[i] && inicio <= fim);

    return -1;
}

int main()
{
    int n, elemento;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int meuArray[n];
    printf("Digite os elementos do vetor de forma ordenada: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &meuArray[i]);
    }

    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

    printf("Digite o elemento pra ser procurado: ");
    scanf("%d", &elemento);

    int resultado = buscaBinaria(meuArray, tamanho, elemento);

    if (resultado != -1)
    {
        printf("O elemento %d está na posição %d do vetor\n", elemento, resultado);
    } else {
        puts("Elemento não encontrado");
    }
    return 0;
}
