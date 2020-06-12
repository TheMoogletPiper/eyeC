#include <stdio.h>
#include <stdlib.h>


int		ft_atoi(char *str)
{
	int		i = 0; // String index location
	int		sign = 1; // If not changed, result will be positive
	int		nbr = 0; //Initializes result output *IMPORTANT*


    if (str[0] == '-'){ // If str[0] is a '-' character, the number is negative, so sign = -1
            sign = -1;
            i++;
    }
    for(i; str[i] != '\0'; i++) // Check until end of string. IF WE START IN i = 0 RESULTS MAY GET WONKY INTRODUCING NEGATIVE NUMBERS
    {
            nbr = nbr*10 + str[i] - '0'; // Multiplies nbr by 10 every time loop happens, so it can stack up (1, 10, 100...). Take '0' from it to convert the char into an int.
    }
    return (nbr*sign); // Multiply nbr by sign to return as either positive or negative number

}




int main()
{

    char stoon2[] = "4321";
    char * pstoon2 = &stoon2;
    printf("%d", ft_atoi(pstoon2));
    return 0;
}
