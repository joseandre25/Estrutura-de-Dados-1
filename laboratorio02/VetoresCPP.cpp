// Exercicio 02

#include <iostream>

using namespace std;

int criaVetInt(int N){
    int *ptrN;

    int X[N];
    ptrN = &X[N];

    cout << ptrN << endl;
}

float criaVetFloat(int F){
    float *ptrF;

    float Y[F];
    ptrF = &Y[F];

    cout << ptrF << endl;
}
int main()
{
    int N, F;
    cin >> N;
    criaVetInt(N);
    cin >> F;
    criaVetFloat(F);

    return 0;
}
