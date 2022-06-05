#include <stdio.h>

int     ft_sqrt(int nb)
{
        int     i;
        int     j;
        int     n;

        i = 1;
        j = 1;
        n = 0;
        while (n != nb)
        {
                n = i * j;
                if (n == nb)
                        return (i);
                i++;
                j++;
                if (n > nb)
                        return (0);
        }
}

int main()
{
        int nb = 144;
        printf ("%i", ft_sqrt(nb));
}
