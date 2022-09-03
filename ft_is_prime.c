#include <stdio.h>

int     ft_is_prime(int nb)
{
    int i;
    int n;
    
    i = 0;
    n = 3;
    if (nb == 2)
        return (1);
    i = nb % 2;
    if (i == 0)
        return (0);
    i = 0;
    if (nb <= 1)
        return (0);
    while (n < nb)
    {
        i = nb % n;
        if (i == 0)
          return (0);
        i = 0;
        n = n + 2;
    }
    return (1);
}

int main()
{
        int nb = 2147483647;
        printf("%i", ft_is_prime(nb));
}

