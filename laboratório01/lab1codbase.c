#include <stdio.h>
#include <string.h>

int namefilepointposition(char *fullname){
   int i;
   for(i=0;i<strlen(fullname);i++){
       if(fullname[i]=='.')
        break;
   } 
   if(i>=strlen(fullname))
        return -1;
    else
        return i;
}



int word2vec(char *arqEntrada){
    FILE *arqent, *arqsaida;
    //char nomarq[40];
    char ch;

    arqent = fopen(arqEntrada, "r");
    
    while (ch != EOF)
    {
        ch = fgetc(arqent);
    }
    
    int pointidx = namefilepointposition(arqEntrada);
    int pp;
//Generating Output filename    
    if(pointidx>=0){
        for(pp=0;pp<pointidx;pp++)
            nomarq[pp] = nomarq[pp];
        nomarq[pp] = '\0';//End of string
    }
    else
        strcpy(nomarq,  arqEntrada);
        
    strcat(nomarq,  "_Vocabulo");
    strcat(nomarq,  ".txt");
    printf("\nRecebi no nome do arquivo: %s", nomarq);

//Generating the output:

    return 1;

    fclose(arqent);
}


int main()
{
    char nomearq[30];
    printf("Entre com nome do arquivo: ");
    scanf(" %s",nomearq);
    if (!word2vec(nomearq))
        printf("\nErro na geração do vocábulo!");
    else
        printf("\nGerei o vocábulo!");
    

    return 0;
}
