#include <stdio.h>
#include <stdlib.h>

int ft_str_is_printable(char *str){

    int i, c=0;

        if (str[0]=='\0' || strlen(str)==0){
            return 1;   //Check if str is empty and return 1 in that case
        }
        for (i=0;str[i]!='\0';i++){
            if (str[i] < 32){   // Any char with a decimal number lesser than 32 is a non printable char
                c++;               // If that's the case, increase c
            }
        }
        if (c > 0) {
        return 0;   //Return 0 if the str has any non printable char
    } else {
        return 1;   //Return 1 if the str has all printable chars
    }
}
int main()
{
    char test[4]={33, '\0', 14};
    char *ptest = test;
    printf("%d", ft_str_is_printable(ptest));
    return 0;
}
