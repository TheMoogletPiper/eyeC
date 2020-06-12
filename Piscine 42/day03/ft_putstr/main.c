#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


int	ft_putstr(char *str)
{
	int count;
	char value;

	count = 0;
	value = *str;

	while(value != '\n'){
        str++;
        value = *str;
        count++;
	}
	printf("%d", count);
	return 0;
}

int main(){

    char string[] = "cuentame";
    ft_putstr(string);
    return 0;
}
