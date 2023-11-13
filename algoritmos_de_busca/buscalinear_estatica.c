#include <stdio.h>

int buscaLinear(int arr[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] == elemento)
        {
            return i;
        }
        
    }
    return -1;
}

int main()
{
    int meuArray[] = {10, 5, 8, 2, 7};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);
    int elementoProcurado = 7;

    int resultado = buscaLinear(meuArray, tamanho, elementoProcurado);

    if (resultado != -1)
    {
        printf("Elemento encontrado no índice %d\n", resultado);
    } else {
        printf("Elemento não encontrado\n");
    }
    
    return 0;
}
