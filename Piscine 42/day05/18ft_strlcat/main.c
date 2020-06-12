#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){

    int i=0, j, k;

    k = sizeof(dest);

    /**while(dest[i]!='\0'){
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
    return dest;**/
    return k;
}


int main()
{
    char str1[120];
    char *pstr1 = str1;
    char str2[]={"Second"};
    char *pstr2 = str2;
    unsigned int number = 3;
    printf("%d", ft_strlcat(pstr1, pstr2, number));
    return 0;
}
