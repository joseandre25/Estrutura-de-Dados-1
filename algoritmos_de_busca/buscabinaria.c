#include <stdio.h>

int buscaBinaria(int array[], int tamanho, int chave)
{
    int inicio = 0, i = 0, fim = tamanho - 1;

    do
    {
        int meio = (inicio + fim) / 2;
        if (array[meio] == chave)
        {
            return meio;
        }
        else if (array[meio] < chave)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    } while (inicio <= fim && chave != array[i]);
    return -1;
}

int main(){

    int n, chave;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    int meuArray[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &meuArray[i]);
    }
    
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

    printf("Digite o elemento que você quer encontrar: ");
    scanf("%d", &chave);

    int resultado = buscaBinaria(meuArray, tamanho, chave);

    if (resultado != -1)
    {
        printf("O elemento %d está no índice %d do vetor.\n", chave, resultado);
    } else {
        puts("Elemento não encontrado");
    }
    
    return 0;
}