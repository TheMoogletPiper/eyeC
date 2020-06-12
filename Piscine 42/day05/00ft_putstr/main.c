#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putstr(char *str){

    int i;
    for (i = 0; str[i] != 0; i++){
        ft_putchar(str[i]);
    }
}





int main()
{
    ft_putstr("caracol");
    return 0;
}
