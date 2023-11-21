// BubbleSort ou Ordenação por Bolha

// - Compara pares de elmentos adjacentes e os troca de lugar se estiverem na ordem errada
// - Esse processo se repete até que mais nenhuma troca seja necessária (elementos já ordenados)

// Perfomance:
// - Melhor Caso: O(N)
// - Pior Caso: O(N^2)

// - NÃO recomendado para grandes conjuntos de dados

#include <stdio.h>
#include <stdlib.h>

// Função de ordenação por Bubble Sort
void bubbleSort(int *V, int N) {
    int i, continua, aux, fim = N;

    // Loop principal
    do {
        continua = 0;

        // Percorre o array comparando elementos adjacentes
        for (int i = 0; i < fim - 1; i++) {
            if (V[i] > V[i + 1]) {
                // Troca os elementos se estiverem fora de ordem
                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;
                
                // Marca a necessidade de mais uma passagem pelo array
                continua = i;
            }
        }

        // Reduz a área de busca no array
        fim--;

    } while (continua != 0);

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

    puts("BubbleSort: ");
    // Chama a função de ordenação por Bubble Sort
    bubbleSort(V, N);

    // Libera a memória alocada
    free(V);
    return 0;
}
