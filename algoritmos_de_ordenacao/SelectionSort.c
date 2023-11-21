// Ordenação por Seleção
// - A cada passo, procura o menor valor do array e o coloca na primeira posição do array
// - Descarta a primeira posição array e repete o processo para as N posições seguintes

// Perfomance:
// - Melhor Caso: O(N²);
// - Pior Caso: O(N²);
// Ineficiente para grandes conjuntos de dados

#include <stdio.h>
#include <stdlib.h>

// Função de ordenação por Selection Sort
void SelectionSort(int *V, int N) {
    int i, j, menor, troca;

    // Loop para percorrer todo o array
    for (i = 0; i < N - 1; i++) {
        menor = i;

        // Encontra o índice do menor elemento no restante do array
        for (j = i + 1; j < N; j++) {
            if (V[j] < V[menor]) {
                menor = j;
            }
        }

        // Troca o elemento atual com o menor encontrado
        if (i != menor) {
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
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

    puts("SelectionSort: ");
    // Chama a função de ordenação por Selection Sort
    SelectionSort(V, N);

    // Libera a memória alocada
    free(V);
    return 0;
}
