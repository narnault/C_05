#include <stdio.h>

int     ft_is_prime(int nb)
{
    int n;
    int i = 0;
    
    n = 3;
    if ((nb <= 1) || (nb % 2 == 0))
        return (0);
    if (nb == 2)
        return (1);
    while (n < nb)
    {
        i = nb % n;
        if (i == 0)
          return (0);
        if (n == 46337)
            return (1);
        n += 2;
    }
    return (1);
}

int main()
{
        int nb = 2147483647;
        printf("%i", ft_is_prime(nb));
}

