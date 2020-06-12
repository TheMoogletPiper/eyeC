#include <stdio.h>
#include <stdlib.h>


void ft_putchar(char c){
    write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * (-1);
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}

int main()
{
    ft_putnbr(98);
    return 0;
}
