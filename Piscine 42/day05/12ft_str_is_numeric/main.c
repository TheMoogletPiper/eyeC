#include <stdio.h>
#include <stdlib.h>


int ft_str_is_numeric(char *str){

    int i, c=0;

    if (str[0]=='\0'){
        return 1;
    }

    for(i=0; str[i]!='\0'; i++){
        if(str[i] < 48 || str[i] > 57){
            c++;
        }
    }
    if (c > 0){
        return 0;
    } else {
        return 1;
    }

}


int main()
{
    char prueba[100]="";
    printf("%d", ft_str_is_numeric(prueba));
    return 0;
}
