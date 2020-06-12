#include <stdio.h>
#include <stdlib.h>



char *ft_strcpy(char *dest, char *src){

    int i;
    for (i=0; src[i] != '\0'; i++){ // Standard for string loop
        dest[i] = src[i];   // Copies each index position from the source string into the destination string, one by one.
    }
    dest[i] = '\0'; //When reaching the last index position, we add an end of string character, otherwise the end of it will show weird characters.
    return dest;
}




int main()
{
    char source[] = "szx";
    char * psource = &source;
    char destination[50];
    char * pdestination = &destination;
    char otra;
    otra = ft_strcpy(pdestination, psource);
    printf("%s", otra);
    return 0;
}
