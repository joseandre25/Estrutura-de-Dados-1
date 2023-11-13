#include <stdio.h>

int buscaLinear(int arr[], int tamanho, int elemento){

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
    int n, chave;
    printf("Digite a quantidade de elementos a serem inseridos: ");
    scanf("%d", &n);

    int meuArray[n];
    printf("Digite os elementos: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &meuArray[i]);
    }
    
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);

    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &chave);

    int resultado = buscaLinear(meuArray, tamanho, chave);

    if (resultado != -1)
    {
        printf("O elemento %d foi encontrado na posição %d\n", chave, resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }
    
    return 0;
}
