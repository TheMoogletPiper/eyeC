#include <stdio.h>
#include <stdlib.h>


int ft_strcmp(char *s1, char *s2){

    int i;
    int sum1;
    int sum2;

    for(i=0; s1[i] != '\0'; i++){
        sum1 += s1[i];
        printf("%d\n", sum1);
    }

    for(i=0; s2[i] != '\0'; i++){
        sum2 += s2[i];
        printf("%d\n", sum2);
    }

    if (sum1 > sum2){
        printf("String one is greater than string two");
    }

    if (sum1 == sum2){
        printf("String one is equal to string two");
    }

    if (sum1 < sum2){
        printf("String one is lesser than string two");
    }
    return 0;

}

int main()
{

    char string1[15] = "KAMIKAZE";
    char string2[15] = "kamikaze";
    ft_strcmp(string1, string2);
    return 0;
}
