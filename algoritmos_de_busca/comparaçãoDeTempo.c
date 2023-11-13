#include <stdio.h>
#include <time.h>

int buscaBinaria(int array[], int tamanho, int chave)
{
    clock_t start = clock();
    int inicio = 0, fim = tamanho - 1, i = 0;

    do
    {
        int meio = (inicio + fim) / 2;
        if (chave == array[meio])
        {
            clock_t end = clock();
            double tempo_total = ((double)(end - start)) / CLOCKS_PER_SEC;
            printf("Busca Binária: Elemento encontrado no índice %d em %f segundos\n", meio, tempo_total);
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

    clock_t end = clock();
    double tempo_total = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Busca Binária: Elemento não encontrado em %f segundos\n", tempo_total);
    return -1;
}

int buscaLinear(int arr[], int tamanho, int elemento)
{
    clock_t inicio = clock();

    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] == elemento)
        {
            clock_t fim = clock();
            double tempo_total = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
            printf("Busca Linear: Elemento encontrado no índice %d em %f segundos\n", i, tempo_total);
            return i;
        }
    }
    clock_t fim = clock();
    double tempo_total = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Busca Linear: Elemento não encontrado em %f segundos\n", tempo_total);
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

    buscaLinear(meuArray, tamanho, elemento);
    buscaBinaria(meuArray, tamanho, elemento);

    return 0;
}
