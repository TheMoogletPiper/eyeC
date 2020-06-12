#include <stdio.h>
#include <stdlib.h>

void   ft_swap(int *a, int *b){
    int c;
    c = *b;  /* Guardo el valor de A en C*/
    *b = *a; /* Cambio el valor de A por el de B (first swap)*/
    *a = c; /* Cambio el valor de B por el de A, guardado en C (second swap) */
}
int main()
{
    int a = 23;
    int *pointer_a = &a;
    int b = 42;
    int *pointer_b = &b;
    printf("%d, %d\n", *pointer_a, *pointer_b);
    ft_swap(pointer_a, pointer_b);
    printf("%d, %d\n", *pointer_a, *pointer_b);
    return 0;
}
