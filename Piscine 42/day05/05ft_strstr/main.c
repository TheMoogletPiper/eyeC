#include <stdio.h>
#include <stdlib.h>



char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j = 0;
    for (i = 0; str[i] != '\0'; i++){

        if (str[i] != to_find[j]){
            i++;
        } else {
            j++;
            i++;
            if (str[i] != to_find[j]){
                j = 0;
                i++;
            }

        }
    }








}

int main (void)
{


  return 0;
}
