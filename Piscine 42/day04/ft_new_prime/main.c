#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb){

    int primo = 2;

    if (nb <= 0){
        return 0;
    }

    while (nb % primo == 0){
        primo++;
        if (nb % primo != 0){
            nb++;
            primo = 2;}
    }
    while (nb % primo != 0){
        primo++;
        if (nb % primo == 0){
            nb++;
            primo = 2;
            if (nb % primo == 0 && nb == primo){
                return nb;
            }
            }
    }
}



int main(){
    printf("%d", ft_is_prime(8));
    return 0;
}
