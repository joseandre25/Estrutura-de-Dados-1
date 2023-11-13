#include <stdio.h>

// Programa que recebe um vetor de N inteiros e calcula a média entre eles
// Retorna a parte inteira apenas, fiquei com preguiça de mudar as máscaras

int calculaMedia(int vetor[], int tamanho){
    int media, soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    
    media = soma / tamanho;
    
    return media;
}

int main(){

    int n;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    int elementos[n];
    printf("Digite os elementos: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &elementos[i]);
    }
    
    int resultado = calculaMedia(elementos, n);

    printf("A média entre os %d elementos é igual a %d\n", n, resultado);
    return 0;
}