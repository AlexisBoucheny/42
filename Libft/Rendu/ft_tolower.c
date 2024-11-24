#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

#include <stdio.h>

int main(void)
{
    char c1 = 'A';
    char c2 = 'b';
    
    printf("Résultat de ft_tolower('%c'): %c\n", c1, ft_tolower(c1));
    printf("Résultat de ft_tolower('%c'): %c\n", c2, ft_tolower(c2));

    return (0);
}