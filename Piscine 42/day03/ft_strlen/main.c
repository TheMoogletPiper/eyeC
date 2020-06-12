#include <stdio.h>
#include <stdlib.h>



int ft_strlen(char *str){

    int count = 0;
    char value = *str;

    printf("%d\n", count);

    while(value != '\n'){
        str++;
        value = *str;
        count++;

    }

    printf("%d", count);
    return count;

}








int main()
{
    char string[] = "banana";
    ft_strlen(string);
    return 0;
}
