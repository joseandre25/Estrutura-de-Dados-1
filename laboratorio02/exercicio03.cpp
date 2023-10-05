/*Seja pvetcar um vetor não ordenado contendo valores do tipo char; 
ptammax, um valor inteiro indicando a quantidade de elementos alocados em pvetcar 
e pqtde, um valor inteiro indicando a quantidade atual de elementos em pvetcar. 
Escreva as funções solicitadas abaixo considerando que pvetcar, ptammax e pqtde
sejam parâmetros de entrada das mesmas:
a. Faça uma função que receba um caracter e o inclua na primeira posição disponível de pvetcar;
b. Faça uma função que receba um caracter e o exclua de pvetcar;*/

#include <iostream>
using namespace std;

/*int incluiChar(char pvetcar, int ptammax, int pqtde){

    char pvetcar[ptammax], c;

    cout << "char a ser inserido: " << endl;
    cin >> c;

    for (int i = 0; i >= pqtde; i++)
    {
        cout << pvetcar[i] + c;
    }
    
    return 0;
}*/

int main()
{
    int ptammax, pqtde = 0;

    cin >> ptammax;
    char pvetcar[ptammax], c;

    for (int i = 0; i < ptammax; i++)
    {
        cin >> pvetcar[i];
        pqtde++;
    }

    cout << "char a ser inserido: " << endl;
    cin >> c;

    for (int i = 0; i <= pqtde; i++)
    {
        cout << pvetcar[i] << endl;
        cout << c;
    }
    
 
    return 0;
}