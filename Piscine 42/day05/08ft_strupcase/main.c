#include <stdio.h>
#include <stdlib.h>



char	*ft_strupcase(char *str){
	int i;

	for (i=0; str[i] != '\0'; i++){
        if (str[i]>= 97 && str[i]<=122){
            str[i] -= 32;
        }
	}
	return str;

}


int main()
{

    char string[] = "CaraCol";
    char * pstring = &string;
    printf("%s", ft_strupcase(pstring));
    return 0;
}
