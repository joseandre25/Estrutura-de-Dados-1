#include <stdio.h>

int pot(int base, int exp)
{
    int x;
    if (!exp)
    {
        return 1;
    }
    else
    {
        x = (base * pot(base, exp - 1));
        printf("%d", x);
    }
    return 0;
}

int main()
{
    int base, exp;
    scanf("%d", &base);
    scanf("%d", &exp);

    pot(base, exp);
    return 0;
}
