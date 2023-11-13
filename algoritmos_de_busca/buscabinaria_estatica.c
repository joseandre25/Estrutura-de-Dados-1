#include <stdio.h>

int buscaBinaria(int arr[], int tamanho, int elemento) {
    int esquerda = 0, direita = tamanho - 1;

    while (esquerda <= direita)
    {
        int meio = (esquerda + direita) / 2;

        if (arr[meio] == elemento)
        {
            return meio;
        } else if (arr[meio] < elemento)
        {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;
    
}

int main()
{
    int meuArray[] = {2, 5, 7, 10, 15, 20, 25};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);
    int elementoProcurado = 15;

    int resultado = buscaBinaria(meuArray, tamanho, elementoProcurado);

    if (resultado != -1)
    {
        printf("Elemento encontrado no índice %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }
    
    return 0;
}
