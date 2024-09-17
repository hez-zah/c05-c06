#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;
    int i;

    result = 1;
    if(power < 0)
        return 0;
    else if(nb == 0 || power == 0)
        return 1;
    else
    {
        i = 1;
        while(i <= power)
        {
            result*= nb;
            i++;
        }
    }
    return result;
}

int main()
{
    printf("%d\n",ft_iterative_power(-5,5));
    return 0;
}