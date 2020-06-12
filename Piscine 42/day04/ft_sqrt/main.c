#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb){
    int sqr = 1;
    while ((sqr * sqr) < nb){
        sqr ++;
    }
    if ((sqr * sqr) == nb){
        return (sqr);
    }
    return (0);
}
int main()
{
    printf("%d", ft_sqrt(12));
    return 0;
}
