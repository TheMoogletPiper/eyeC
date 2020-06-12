#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int numero1;
    int numero2;

    printf("Insert first number\n");
    scanf("%d", &numero1);
    printf("Insert second number\n");
    scanf("%d", &numero2);
    if(numero1 % numero2 != 0){
        printf("Result isn't an int");
    }else{
        printf("Result is an int");
    }
    return 0;
}
