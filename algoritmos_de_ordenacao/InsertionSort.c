// Ordenação por Inserção
// - Similar a ordenação de cartas de baralho com as mãos

// Perfomance:
// - Melhor Caso: O(N);
// - Pior Caso: O(N²);
// Eficiente para conjuntos de dados pequenos

#include <stdio.h>
#include <stdlib.h>

// Função de ordenação por Insertion Sort
void insertionSort(int *V, int N) {
    int i, j, aux;

    // Loop para percorrer o array
    for (i = 1; i < N; i++) {
        // Armazena o elemento a ser inserido temporariamente
        aux = V[i];

        // Move os elementos maiores que o elemento a ser inserido para a frente
        for (j = i; (j > 0) && (aux < V[j - 1]); j--) {
            V[j] = V[j - 1];
        }

        // Insere o elemento na posição correta
        V[j] = aux;
    }

    // Imprime o array ordenado
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    puts("\n");
}

int main() {
    int N;
    printf("Write the size of array: ");
    scanf("%d", &N);

    int *V = (int *)malloc(N * sizeof(int));

    printf("Write the elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    puts("InsertionSort: ");
    // Chama a função de ordenação por Insertion Sort
    insertionSort(V, N);

    // Libera a memória alocada
    free(V);
    return 0;
}
