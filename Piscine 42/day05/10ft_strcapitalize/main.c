#include <stdio.h>
#include <stdlib.h>


char	*ft_strcapitalize(char *str){
	int i;

	for (i=0; str[i] != '\0'; i++)
        {
        if (str[i - 1] <= 64 && str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
        if (str[i - 1] >= 65 && str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        if (str[0] >= 90){
            str[0] -= 32;
        }
    }
	return str;
}

int main()
{
    char string[] = "CaraCol, como anDAS tu Tan raPido+tonto";
    char * pstring = &string;
    printf("%s", ft_strcapitalize(pstring));
    return 0;
}
