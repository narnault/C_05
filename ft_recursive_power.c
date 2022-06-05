#include <stdio.h>

int     ft_recursive_power(int nb, int power)
{
        if (power == 0)
                return (1);
        return nb *= ft_recursive_power(nb, power - 1);
}

int main()
{
        int nb = 6;
        int power = 0;
        printf("%i", ft_recursive_power(nb, power));
}

