#include <iostream>
using namespace std;

int somaDigitos(int n)
{

    if (n < 10)
    {
        return n;
    }
    else
    {
        return n % 10 + somaDigitos(n / 10);
    }
}

int main()
{
    int n;
    cout << "Digite o número: ";
    cin >> n;

    int resultado = somaDigitos(n);
    cout << resultado << endl;

    return 0;
}
