#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se uma palavra é uma stopword (menos de 4 caracteres)
int isStopWord(const char *word) {
    return (strlen(word) < 4);
}

// Função para remover pontuações do final de uma palavra
void removePunctuation(char *word) {
    int length = strlen(word);
    while (length > 0 && ispunct(word[length - 1])) {
        word[length - 1] = '\0';
        length--;
    }
}

// Função para converter uma palavra para minúsculas
void toLowerCase(char *word) {
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
}

// Função para criar um arquivo de saída contendo palavras únicas
void word2vec(const char *inputFileName) {
    char outputFileName[100];
    sprintf(outputFileName, "%s_Vocabulo.txt", inputFileName);

    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    FILE *outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        fclose(inputFile);
        exit(1);
    }

    char word[100];
    char uniqueWords[1000][100];
    int uniqueWordsCount = 0;

    while (fscanf(inputFile, "%s", word) != EOF) {
        removePunctuation(word);
        toLowerCase(word);

        if (!isStopWord(word)) {
            int isUnique = 1;
            for (int i = 0; i < uniqueWordsCount; i++) {
                if (strcmp(word, uniqueWords[i]) == 0) {
                    isUnique = 0;
                    break;
                }
            }
            if (isUnique) {
                strcpy(uniqueWords[uniqueWordsCount], word);
                fprintf(outputFile, "%s\n", word);
                uniqueWordsCount++;
            }
        }
    }

    fclose(inputFile);
    fclose(outputFile);
}

int main() {
    char inputFileName[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", inputFileName);

    word2vec(inputFileName);

    printf("Arquivo de saída criado com sucesso.\n");

    return 0;
}
