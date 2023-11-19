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

void merge(int *V, int inicio, int meio, int fim);

void mergeSort(int *V, int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = floor((inicio + fim) / 2);
        mergeSort(V, inicio, meio);
        mergeSort(V, meio + 1, fim);
        merge(V, inicio, meio, fim);
    }
}

void merge(int *V, int inicio, int meio, int fim) {
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *)malloc(tamanho * sizeof(int));
    if (temp != NULL) {
        for (i = 0; i < tamanho; i++) {
            if (!fim1 && !fim2) {
                if (V[p1] < V[p2]) {
                    temp[i] = V[p1++];
                } else {
                    temp[i] = V[p2++];
                }
                if (p1 > meio) {
                    fim1 = 1;
                }
                if (p2 > fim) {
                    fim2 = 1;
                }
            } else {
                if (!fim1) {
                    temp[i] = V[p1++];
                } else {
                    temp[i] = V[p2++];
                }
            }
        }
        for (j = 0, k = inicio; j < tamanho; j++, k++) {
            V[k] = temp[j];
        }
    }
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

    mergeSort(V, 0, N - 1);

    puts("Sorted array:");
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    free(V);

    return 0;
}
