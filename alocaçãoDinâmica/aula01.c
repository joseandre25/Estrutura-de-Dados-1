#include <stdio.h>

int main()
{
    int numero, *ptr, **ptr2;
    numero = 79417;
    ptr = &numero;
    *ptr = 90560;
    //ptr2 = &ptr;
  
    printf("Valor: %d\n", numero);
    printf("Endereço: %p\n", &numero);
    printf("Ponteiro: %p\n", ptr);
    //printf("Ponteiro pra ponteiro: %p\n", ptr2);

    return 0;
}