#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, FIRST, WIN, LOSE, TIRADA;

    FIRST = 0;

    if(FIRST = 0){
        d1 = rand()%6;
        printf("%d\n", d1);
        d2 = rand()%6;
        printf("%d\n", d2);
        FIRST = 1;
        if(d1+d2==7 ||d1+d2==10){
            WIN = 1;
        } if(d1 + d2 == 2, 3, 12){
            LOSE = 1;
        } else{
            TIRADA = d1 + d2;

        }

    if(WIN = 1){
        printf("You win!");
    } if(LOSE = 1){
        printf("You lose!");
    } else{
        printf("Your number is now %d", TIRADA);
    }

    }
    return 0;
}
