#include <stdio.h>
#include <stdlib.h>



int ft_str_is_lowercase(char *str){

    int i, c=0;

    if (str[0]=='\0' || strlen(str)==0){
        return 1;   //Check if str is empty and return 1 in that case
    }
    for (i=0;str[i]!='\0';i++){
        if (str[i] < 32){   // Any char with a decimal number lesser than 32 is a non printable char and most likely coming from garbage value
            return 1;       // If that's the case, return 1, although he str isn't technically empty, there's no value associated to it in the code
        }
        if (str[i] > 122 || str[i] < 97){
            c++;    // Check if the str has any non lowercase characters and one up
        }           // c if true
    }
    if (c > 0) {
        return 0;   //Return 0 if the str has any non lowercase char
    } else {
        return 1;   //Return 1 if the str has all lowercase chars
    }
}

int main()
{
    char banana[20] = "banana";
    char *pbanana = banana;
    char prueba[10]={0}; //If string is empty, return 1. Testing with an empty str
    char *pprueba = prueba;
    char garbage[10];
    char *pgarbage = garbage;

    printf("%d\n", ft_str_is_lowercase(pgarbage));
    return 0;
}
