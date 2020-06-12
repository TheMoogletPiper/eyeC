#include <stdio.h>
#include <stdlib.h>

int ft_find_next_prime(int nb){

    int prime = 2;
    int primeFinder = 0;

    if (nb <= 0){
        return 0;
    }
    while (primeFinder == 0){
        if (nb % prime == 0 && nb == prime){
            primeFinder++;
        }
        if (nb % prime != 0){
            prime++;
            if(nb == prime){
                primeFinder++;
            }
        }
        if (nb % prime == 0 && prime != nb){
            nb++;
            prime = 2;
        }
        if (primeFinder == 1){
            printf("%d, ", prime);
            if (prime <= 100){
                ft_find_next_prime(prime + 1);
            }
        }
    }
}
int main()
{
    ft_find_next_prime(8);
    return 0;
}
