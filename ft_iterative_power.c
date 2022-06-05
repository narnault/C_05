#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 0;
	while (power >= 0)
	{
		if (i == 0) {
			i = 1;
			power--;
		}
		i = nb * i;
		power--;
	}
	return (i);
}

int main()
{
	int nb = 6;
	int power = 8;
	printf("%i", ft_iterative_power(nb, power));
}
