#include <stdio.h>
#include <stdlib.h>

void   ft_ultimate_ft(int *********nbr){

    *********nbr = 42;
}













int main()
{
    int a = 23;
    int * pointer_a = &a;
    int **pointer_b = &pointer_a;
    int ***pointer_c = &pointer_b;
    int ****pointer_d = &pointer_c;
    int *****pointer_e = &pointer_d;
    int ******pointer_f = &pointer_e;
    int *******pointer_g = &pointer_f;
    int ********pointer_h = &pointer_g;
    int *********pointer_i = &pointer_h;






    printf("%d\n", *********pointer_i);
    ft_ultimate_ft(pointer_i);
    printf("%d\n", *********pointer_i);
    return 0;
}
