#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power){
    int i = 1;
    if (power < 0){
        return 0;
    }
    while(power > 0){
            i *= nb;
            return(nb * ft_recursive_power(nb, power - 1));
            }
    return i;
}






int main()
{
    printf("%d", ft_recursive_power(5, 4));
    return 0;
}
