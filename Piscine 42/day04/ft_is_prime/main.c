#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb){

    int primo = 2;

    if (nb <= 0 || nb % primo == 0){
        return 0;
    }
    while (nb % primo != 0){
        primo++;
        if (nb == primo){
            return 1;
            break;
        }
    }
}

int main()
{
    printf("%d", ft_is_prime(9));
    return 0;
}
