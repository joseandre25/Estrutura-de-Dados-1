// Ordenação por Inserção
// - Similar a ordenação de cartas de baralho com as mãos

// Perfomance:
// - Melhor Caso: O(N);
// - Pior Caso: O(N²);
// Eficiente para conjuntos de dados pequenos

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *V, int N){
    int i ,j, aux;
    for(i = 1; i < N; i++){
        aux = V[i];
        for(j = i; (j > 0) && (aux < V[j - 1]); j--){
            V[j] = V[j - 1];
        }
        V[j] = aux;
    }
    for(int i = 0; i < N; i++){
        printf("%d ", V[i]);
    }
    puts("\n");
}

int main(){
    
    int N;
    printf("Write the size of array: ");
    scanf("%d", &N);

    int *V = (int*)malloc(N * sizeof(int)); 

    printf("Write the elements: ");
    for(int i = 0; i < N; i++){
        scanf("%d", &V[i]);
    }

    puts("InsertionSort: ");
    insertionSort(V, N);

    free(V);
    return 0;
}