#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    int qtdChar = 0;
    int qtdCharF;
    int qtdEsp = 0;
    int qtdTab = 0;
    int qtdNewLines = 0;

    fp = fopen("print.txt", "r");

    if (fp == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        qtdChar++;

        if (c == 32) {
            qtdEsp++;
        }
        if (c == 9) {
            qtdTab++;
        }
        if (c == '\n') {
            qtdNewLines++;
        }
    }

    fclose(fp);
    qtdCharF = qtdChar - (qtdEsp + qtdTab + qtdNewLines);

    printf("Quantidade de Caracteres: %d\n", qtdCharF);
    printf("Quantidade de Espaços: %d\n", qtdEsp);
    printf("Quantidade de Tabs: %d\n", qtdTab);
    printf("Quantidade de Newlines: %d\n", qtdNewLines);

    return 0;
}
