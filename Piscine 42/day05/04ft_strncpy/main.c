#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){

    int i;
    for (i=0; src[i] != '\0'; i++){ // Standard for string loop
        dest[i] = src[i];   // Copies each index position from the source string into the destination string, one by one.
        if (i >= n){    // If index reaches the same or over the value of n, add end of string and break loop.
            dest[i] = '\0'; //Because index starts at 0, the, 4th position will be the 5th character on the string. Make that '\0'.
        }
    }
    return dest;
}




int main()
{
    char source[] = "Traumatologhpo";
    char * psource = &source;
    char destination[50];
    char * pdestination = &destination;


    printf("%s", ft_strncpy(pdestination, psource, 4));
    return 0;
}
