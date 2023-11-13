#include <stdio.h>
#include <stdlib.h>

// Função para inserir um caractere no vetor
void InserirCaracter(char* pvetcar, int* ptammax, int* pqtde, char caracter) {
    // Verifique se há espaço disponível no vetor
    if (*pqtde < *ptammax) {
        pvetcar[*pqtde] = caracter; // Insere o caractere na primeira posição disponível
        (*pqtde)++; // Atualiza a quantidade atual de elementos
    } else {
        printf("O vetor está cheio. Não é possível inserir o caractere.\n");
    }
}

// Função para excluir um caractere do vetor
void ExcluirCaracter(char* pvetcar, int* pqtde, char caracter) {
    int encontrado = 0;
    for (int i = 0; i < *pqtde; i++) {
        if (pvetcar[i] == caracter) {
            // Desloca os elementos restantes para preencher a lacuna
            for (int j = i; j < *pqtde - 1; j++) {
                pvetcar[j] = pvetcar[j + 1];
            }
            (*pqtde)--;
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("Caractere '%c' removido do vetor.\n", caracter);
    } else {
        printf("Caractere '%c' não encontrado no vetor.\n", caracter);
    }
}

int main() {
    int tammax = 10;
    int qtde = 0;
    char* vetor = (char*)malloc(tammax * sizeof(char));

    InserirCaracter(vetor, &tammax, &qtde, 'A');
    InserirCaracter(vetor, &tammax, &qtde, 'B');
    InserirCaracter(vetor, &tammax, &qtde, 'C');

    printf("Vetor: ");
    for (int i = 0; i < qtde; i++) {
        printf("%c ", vetor[i]);
    }
    printf("\n");

    ExcluirCaracter(vetor, &qtde, 'B');

    printf("Vetor após exclusão: ");
    for (int i = 0; i < qtde; i++) {
        printf("%c ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
