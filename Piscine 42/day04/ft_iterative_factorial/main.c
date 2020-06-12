#include <stdio.h>
#include <stdlib.h>



int		ft_iterative_factorial(int nb)
{
	int		factorial = 1;
	int		i;
	if (nb == 0){
		return (0);}
	for(i=1; i<=nb; ++i){
		factorial *= i;}
	return (factorial);
}
int main()
{
    int num;
    num = ft_iterative_factorial(4);
    printf("%d", num);
    return 0;
}
