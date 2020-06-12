#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str){
	int i;

	for (i=0; str[i] != '\0'; i++){
        if (str[i]>= 65 && str[i]<=90){
            str[i] += 32;
        }
	}
	return str;

}


int main()
{

    char string[] = "CaraCol";
    char * pstring = &string;
    printf("%s", ft_strlowcase(pstring));
    return 0;
}
