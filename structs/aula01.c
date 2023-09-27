/* A Struct define um novo tipo de dado
estrutura de dados composta que define
fisicamente uma lista de variáveis agrupadas
sob um nome em um bloco de memória

Exemplo: */

#include <stdio.h>

int main()
{
    /*struct Livros
    {
        char titulo[50];
        char autor[50];
        char assunto[100];
        int id_livro;
    };    

    struct Livros Livro1 = {"Titulo", "Blog Trybe", "Bem genérico", 150};

    printf("%s, %s, %s, %d\n ", Livro1.titulo, Livro1.autor, Livro1.assunto, Livro1.id_livro);

    strcpy(Livro1.autor, "Machado de Assis");

    printf("%s, %s, %s, %d ", Livro1.titulo, Livro1.autor, Livro1.assunto, Livro1.id_livro);*/

    typedef struct 
    {
        char nome[100];
        int idade;
    }Pessoa;

    /*Pessoa pessoa1, pessoa2;
    pessoa1.idade = 10;
    pessoa2.idade = 21;

    printf("Digite o nome da pessoa 1: \n");
    scanf(" %s", pessoa1.nome);
    
    printf("Idade da %s: %d anos\n", pessoa1.nome, pessoa1.idade);
    printf("Idade da Pessoa 2: %d anos\n", pessoa2.idade);*/

    Pessoa Povo[10];

    Povo[3].idade = 3;
    printf("Idade da pessoa 3 = %d anos\n", Povo[3].idade);

    return 0;
}
