#include <stdio.h>
#include <stdlib.h>


void   ft_ft(int *nbr){

    *nbr = 42;
}













int main()
{
    int a = 23;
    int * pointer_a = &a;
    int **pointer_b = &pointer_b;
    printf("%d", **pointer_b);
    ft_ft(pointer_b);
    printf("%d", **pointer_b);
    return 0;
}
