#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


int main()
{
    int a, b;

    a = 0;
    b = 0;

    while(a < 100 && b < 100){

            ft_putchar(a / 10 + '0');
            ft_putchar(a % 10 + '0');
            ft_putchar(' ');
            ft_putchar(b / 10 + '0');
            ft_putchar(b % 10 + '0');
            b++;
            ft_putchar(',');
            ft_putchar(' ');
            if(b == 100 && a < 100){
                a++;
                b = 0;
            }

    }
    return 0;
}
