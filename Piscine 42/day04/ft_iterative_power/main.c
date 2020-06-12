#include <stdio.h>
#include <stdlib.h>


int ft_iterative_power(int nb, int power){
    int resultado = 1; //Damos el primer valor de resultado, 1, para comenzar la operación//
    if(power < 0){
        return 0;
    }
    while (power > 0){ //Mientras que power esté por encima de 0, resultado se multiplicará por nb y cambiará su valor a este nuevo número//
        resultado *= nb;
        power--; //Reduciremos al final el valor de power, hasta que llegue a 0, cuando se romperá el loop//
    }
    return resultado;
}
int main()
{
    printf("%d", ft_iterative_power(4, 3));
    return 0;
}
