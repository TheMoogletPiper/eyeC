#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcat(char *dest, char *src){

    int i=0, j=0;

    while (dest[i]!='\0'){     //Look for the value of i that has the end of string character
        i++;
    }
    for (j=0; src[j]!='\0'; j++){
        dest[i] = src[j];      //Add the value from each of the chars from the string into our dest string
        i++;
    }
    dest[i] = '\0'; //Add the end of string char to out dest string, as the for loop stops at end of string char of the src string

    return dest;
}






int main()
{
    // Content in main is used for testing purposes only
    char str1[] = {"string "};
    char *pstr1 = str1;
    const char str2[] = {"and another"};
    const char *pstr2 = str2;
    printf("%s\n", ft_strcat(pstr1, pstr2));
    //printf("%s\n", strcat(pstr1, pstr2));
    return 0;
}
