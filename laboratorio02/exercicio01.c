#include <stdio.h>
#include <stdlib.h>

// Função para alocar um vetor de inteiros
int* CriaVetInt(int tamanho) {
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória para o vetor de inteiros.\n");
        exit(1);
    }
    return vetor;
}

// Função para alocar um vetor de floats
float* CriaVetFloat(int tamanho) {
    float* vetor = (float*)malloc(tamanho * sizeof(float));
    if (vetor == NULL) {
        printf("Erro na alocação de memória para o vetor de floats.\n");
        exit(1);
    }
    return vetor;
}

int main() {
    int tamanhoInt = 5;
    int* vetorInt = CriaVetInt(tamanhoInt);

    // Preencha o vetor de inteiros com alguns valores
    for (int i = 0; i < tamanhoInt; i++) {
        vetorInt[i] = i * 2;
    }

    printf("Vetor de inteiros: ");
    for (int i = 0; i < tamanhoInt; i++) {
        printf("%d ", vetorInt[i]);
    }
    printf("\n");

    // Libere a memória alocada para o vetor de inteiros
    free(vetorInt);

    int tamanhoFloat = 3;
    float* vetorFloat = CriaVetFloat(tamanhoFloat);

    // Preencha o vetor de floats com alguns valores
    for (int i = 0; i < tamanhoFloat; i++) {
        vetorFloat[i] = 0.5f * i;
    }

    printf("Vetor de floats: ");
    for (int i = 0; i < tamanhoFloat; i++) {
        printf("%.2f ", vetorFloat[i]);
    }
    printf("\n");

    // Libere a memória alocada para o vetor de floats
    free(vetorFloat);

    return 0;
}

