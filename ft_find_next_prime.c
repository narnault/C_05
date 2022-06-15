#include <stdio.h>

int     prime(int nb) {
    
    int i;
    int n;
    
    i = 0;
    n = 3;
    if (nb == 2)
        return (nb);
    i = nb % 2;
    if (i == 0)
        return (0);
    i = 0;
    if (nb <= 1)
        return (0);
    while (n < nb) {
        
        i = nb % n;
        if (i == 0)
          return (0);
        i = 0;
        n = n + 2;
    }
    return (nb);
}

int     ft_find_next_prime(int nb) {
    
    int i;
    int j;
    
    i = 0;
    j = nb;
    while (i == 0) {
        
        i = prime(j);
        j++;
    }
    return (i);
}

int main() {
    
        int nb = 3;
        printf("%i", ft_find_next_prime(nb));
}
