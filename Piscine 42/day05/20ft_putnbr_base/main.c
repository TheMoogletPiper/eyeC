#include <stdio.h>
#include <stdlib.h>

static int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		while (base[z])
			if (base[i] == base[z++])
				return (0);
		i += 1;
	}
	return (1);
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		size;
	int		n[10];

	i = 0;
	size = 0;
	if (!check_base(base))
		return ;
	//-- if (nbr < 0)
	//{
	//	nbr *= -1;
	//	ft_putchar('-');
	//}
	while (base[size])
		size += 1;
	while (nbr)
	{
		n[i] = nbr % size;
		nbr /= size;
		i += 1;
	}
	while (i > 0)
		ft_putchar(base[n[--i]]);
}



int main()
{

    char binary[3]= "01";
    char *pbinary = &binary;
    char octal[8] = "poneyvif";
    char *poctal = &octal;
    ft_putnbr_base(583, poctal);
    return 0;
}
