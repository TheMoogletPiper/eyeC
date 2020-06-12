#include <stdio.h>
#include <stdlib.h>


char	ft_str_is_alpha(char *str){
	int i = 0;

	while (str[i] != '\0')
        {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || str[i] == 32) //If I want spaces to count as alphabetic, add '32'//
            {
            i++;
            }
        else
            {
            return (0);
            }
        }
    return (1);
}

int main()
{
    char string[] = "abcd +e";
    char * pstring = &string;
    printf("%d", ft_str_is_alpha(pstring));
    return 0;
}
