#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 0;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return (i);
        i++;
    }    
    return (0);
}

int main()
{
    printf("%d\n", ft_sqrt(81));
}