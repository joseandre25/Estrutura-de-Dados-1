// BubbleSort ou Ordenação por Bolha

// - Compara pares de elmentos adjacentes e os troca de lugar se estiverem na ordem errada
// - Esse processo se repete até que mais nenhuma troca seja necessária (elementos já ordenados)

// Perfomance:
// - Melhor Caso: O(N)
// - Pior Caso: O(N^2)

// - NÃO recomendado para grandes conjuntos de dados

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *V, int N){
    int i, continua, aux, fim = N;
    do{
        continua = 0;
        for(int i = 0; i < fim-1; i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    } while(continua != 0);

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

    puts("BubbleSort: ");
    bubbleSort(V, N);

    free(V);
    return 0;
}