#include <stdio.h>

typedef struct {
    int Codg;
    char UF[3];
    char municipio[11];
    char Regiao[11];
    int populacao;
    char porte[11];
} municipios;

int main(void) {
    FILE *file;
    municipios D[10];

    file = fopen("/home/joseandre/Estrutura-de-Dados-1/Lista_Municípios_com_IBGE_Brasil_Versao_CSV.csv", "r");

    if (file) {
        // Assuming the first line is a header and needs to be skipped
        char header[100];
        fgets(header, sizeof(header), file);

        for (int i = 0; i < 10; i++) {
            fscanf(file, "%d;%2s;%10[^;];%10[^;];%d;%10[^\n]\n", &D[i].Codg, D[i].UF, D[i].municipio, D[i].Regiao, &D[i].populacao, D[i].porte);
            printf("%d - %s - %s - %s - %d - %s\n", D[i].Codg, D[i].UF, D[i].municipio, D[i].Regiao, D[i].populacao, D[i].porte);
        }

        fclose(file);
    } else {
        printf("Error opening file.\n");
    }

    return 0;
}
