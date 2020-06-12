#include <stdio.h>
#include <stdlib.h>

void   ft_div_mod(int a, int b, int *div, int *mod){

    *div = a / b;
    *mod = a % b;
}













int main()
{
    int aa = 4981;
    int ab = 351652;
    int resultado;
    int * presultado = &resultado;
    int mod;
    int * pmod = &mod;

    ft_div_mod(aa, ab, presultado, pmod);

    printf("Dividendo: %d\nDivisor %d\nResultado %d\nResto %d\n", aa, ab, resultado, mod);

    return 0;
}
