#include <stdio.h>


int ft_recursive_factorial(int nb)
{
    if(nb == 0 || nb ==1)
        return 1;
    else if(nb > 0)
        return (nb * ft_recursive_factorial(nb - 1));
    else
        return 0;
}

// int main()
// {
//     printf("%d\n",ft_recursive_factorial(-1));
//     printf("%d\n",ft_recursive_factorial(0));
//     printf("%d\n",ft_recursive_factorial(2));
//     printf("%d\n",ft_recursive_factorial(3));
//     return 0;
// }
