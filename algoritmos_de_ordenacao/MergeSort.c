// Ordenação por Mistura
// Dividir e Conquistar
// Divide, recursivamente, o conjunto de dados até que cada subconjunto possua 1 elemento
// - COmbina 2 subconjuntos de forma a obter 1 conjunto maior e ordenado
// - Esse processo se repete até que exista apenas 1 conjunto

// Perfomance
// - Melhor Caso: O(N log N)
// - Pior Caso: O(N log N)
// Desvatangens: recursivo e usa um vetor auxiliar durante a  ordenação (gasta mais memória)

#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *V, int inicio, int fim){
    int meio;
    if(inicio < fim) {
        meio = floor((inicio+fim) / 2);
        mergeSort(V, inicio, meio);
        mergeSort(V, meio+1, fim);
        merge(V, inicio, meio, fim);
    }
    
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

    puts("mergeSort: ");
    mergeSort(V, N);
return 0;
}