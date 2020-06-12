#include <stdio.h>
#include <stdlib.h>


int ft_iterative_power(int nb, int power){
    int resultado = 1; //Damos el primer valor de resultado, 1, para comenzar la operaci�n//
    if(power < 0){
        return 0;
    }
    while (power > 0){ //Mientras que power est� por encima de 0, resultado se multiplicar� por nb y cambiar� su valor a este nuevo n�mero//
        resultado *= nb;
        power--; //Reduciremos al final el valor de power, hasta que llegue a 0, cuando se romper� el loop//
    }
    return resultado;
}
int main()
{
    printf("%d", ft_iterative_power(4, 3));
    return 0;
}
