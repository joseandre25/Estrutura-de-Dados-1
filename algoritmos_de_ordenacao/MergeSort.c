// Ordenação por Mistura
// Dividir pra Conquistar
// Divide, recursivamente, o conjunto de dados até que cada subconjunto possua 1 elemento
// - COmbina 2 subconjuntos de forma a obter 1 conjunto maior e ordenado
// - Esse processo se repete até que exista apenas 1 conjunto

// Perfomance
// - Melhor Caso: O(N log N)
// - Pior Caso: O(N log N)
// Desvatangens: recursivo e usa um vetor auxiliar durante a  ordenação (gasta mais memória)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função auxiliar para combinar duas partes ordenadas de um array
void merge(int *V, int inicio, int meio, int fim);

// Função principal de Merge Sort
void mergeSort(int *V, int inicio, int fim) {
    int meio;
    // Verifica se há mais de um elemento no array
    if (inicio < fim) {
        // Calcula o ponto médio do array
        meio = floor((inicio + fim) / 2);

        // Divide recursivamente a primeira metade do array
        mergeSort(V, inicio, meio);
        
        // Divide recursivamente a segunda metade do array
        mergeSort(V, meio + 1, fim);

        // Combina as duas metades ordenadas
        merge(V, inicio, meio, fim);
    }
}

// Função para combinar duas partes ordenadas de um array
void merge(int *V, int inicio, int meio, int fim) {
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;

    // Aloca memória para um array temporário
    temp = (int *)malloc(tamanho * sizeof(int));

    if (temp != NULL) {
        // Combina as duas partes ordenadas
        for (i = 0; i < tamanho; i++) {
            if (!fim1 && !fim2) {
                if (V[p1] < V[p2]) {
                    temp[i] = V[p1++];
                } else {
                    temp[i] = V[p2++];
                }

                // Verifica se a primeira parte chegou ao fim
                if (p1 > meio) {
                    fim1 = 1;
                }

                // Verifica se a segunda parte chegou ao fim
                if (p2 > fim) {
                    fim2 = 1;
                }
            } else {
                // Copia o restante da parte que não chegou ao fim
                if (!fim1) {
                    temp[i] = V[p1++];
                } else {
                    temp[i] = V[p2++];
                }
            }
        }

        // Copia o array temporário de volta para o array original
        for (j = 0, k = inicio; j < tamanho; j++, k++) {
            V[k] = temp[j];
        }
    }

    // Libera a memória alocada para o array temporário
    free(temp);
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

    // Chama a função de ordenação
    mergeSort(V, 0, N - 1);

    // Imprime o array ordenado
    puts("Sorted array:");
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(V);

    return 0;
}
