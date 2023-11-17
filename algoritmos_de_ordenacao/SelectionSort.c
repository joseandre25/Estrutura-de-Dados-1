// Ordenação por Seleção
// - A cada passo, procura o menor valor do array e o coloca na primeira posição do array
// - Descarta a primeira posição array e repete o processo para as N posições seguintes

// Perfomance:
// - Melhor Caso: O(N²);
// - Pior Caso: O(N²);
// Ineficiente para grandes conjuntos de dados

#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int *V, int N){
    int i ,j, menor, troca;
    for(i = 0; i < N-1; i++){
        menor = i;
        for(j = i+1; j < N; j++){
            if(V[j] < V[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
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

    puts("SelectionSort: ");
    SelectionSort(V, N);

    free(V);
    return 0;
}