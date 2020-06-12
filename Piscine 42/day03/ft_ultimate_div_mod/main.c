#include <stdio.h>
#include <stdlib.h>

void   ft_ultimate_div_mod(int *a, int *b){

    int store1, store2;

    store1 = *a / *b;
    store2 = *a % *b;

    *a = store1;
    *b = store2;

}











int main()
{
    int aa = 10;
    int ab = 5;

    int * paa = &aa;
    int * pab = &ab;

    ft_ultimate_div_mod(paa, pab);
    printf("%d, %d", aa, ab);

    return 0;
}
