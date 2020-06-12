#include <stdio.h>
#include <stdlib.h>



char *ft_strncat(char *dest, char *src, int nb){

    int i=0, j;

    while(dest[i]!='\0'){
        i++;
    }
    for (j=0; src[j]!='\0'; j++){
        dest[i] = src[j];
        i++;
        if(nb==(j+1)){
            break;
            }
        }
    dest[i]='\0';
    return dest;
}


int main()
{
    char str1[]={"First"};
    char *pstr1 = str1;
    char str2[]={"Second"};
    char *pstr2 = str2;
    int number = 3;
    printf("%s", ft_strncat(pstr1, pstr2, number));
    return 0;
}
