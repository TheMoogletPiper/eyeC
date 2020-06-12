#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	int i[2];

	i[0] = -1;
	while (i[0]++ < 99)
	{
		i[1] = -1;
		while (i[1]++ < 99)
		{
			if (i[0] < i[1])
			{
				if (!(i[0] == 0 && i[1] == 1))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(i[0] / 10 + '0');
				ft_putchar(i[0] % 10 + '0');
				ft_putchar(' ');
				ft_putchar(i[1] / 10 + '0');
				ft_putchar(i[1] % 10 + '0');
			}
		}
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
