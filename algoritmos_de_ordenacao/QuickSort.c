// Ordenação por Troca de Partições
// Dividir e Conquistar
// "Particionar": os dados sao rearranjados (valores menores do que o pivô são
// colocados antes dele e os maiores, depois)
// Recursivamente ordena as 2 partições

// Perfomance
// - Melhor Caso: O(N log N)
// - Pior Caso (raro): O(N²)
// Desvatangens: Como escolher o pivô?

#include <stdio.h>
#include <stdlib.h>

// Função para particionar o array
int particiona(int *V, int inicio, int final) {
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    
    while (esq < dir) {
        while (V[esq] <= pivo) {
            esq++;
        }
        while (V[dir] > pivo) {
            dir--;
        }
        if (esq < dir) {
            // Troca os elementos encontrados fora de ordem
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    
    // Coloca o pivô no lugar certo
    V[inicio] = V[dir];
    V[dir] = pivo;

    return dir;
}

// Função principal de Quicksort
void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if (fim > inicio) {
        // Encontra a posição do pivô após a partição
        pivo = particiona(V, inicio, fim);
        
        // Ordena recursivamente as partições restantes
        quickSort(V, inicio, pivo - 1);
        quickSort(V, pivo + 1, fim);
    }
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
    quickSort(V, 0, N - 1);

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