#include <stdio.h>


int ft_iterative_factorial(int nb)
{
    int result;
    int i;
    i=1;
    result = 1;
    if(nb == 0 || nb ==1)
        return 1;
    if(nb < 0)
        return 0;
    while (i <= nb)
    {
        result *= i;//result = 5
        i++;
    }
    return (result);
}

int main()
{
    printf("%d\n",ft_iterative_factorial(-1));
    printf("%d\n",ft_iterative_factorial(0));
    printf("%d\n",ft_iterative_factorial(2));
    printf("%d\n",ft_iterative_factorial(3));
    return 0;
}