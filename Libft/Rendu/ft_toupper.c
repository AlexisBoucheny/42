#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

#include <stdio.h>

int main(void)
{
    char c1 = 'a';
    char c2 = 'B';
    
    printf("Résultat de ft_toupper('%c'): %c\n", c1, ft_toupper(c1));
    printf("Résultat de ft_toupper('%c'): %c\n", c2, ft_toupper(c2));

    return (0);
}