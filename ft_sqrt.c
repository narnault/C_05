#include <stdio.h>

int     ft_sqrt(int nb)
{
    int     i;
    int     n;

    i = 1;
    n = 0;
    while (n <= nb)
    {
        n = i * i;
        if (n == nb)
            return (i);
        if (n > nb || i == 46341)
            return (0);
        i++;
    }
}

int main()
{
        int nb = 1243453;
        printf ("%i", ft_sqrt(nb));
}
