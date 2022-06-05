#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
        int     i;
        int     j;

        i = 1;
        j = 1;
        if (nb > 12 || nb <= 0)
                return (0);
        while (j <= nb)
        {
                i = i * j;
                j++;
        }
        return (i);
}

int main()
{
        int nb = 12;
        printf("%i", ft_iterative_factorial(nb));
}
