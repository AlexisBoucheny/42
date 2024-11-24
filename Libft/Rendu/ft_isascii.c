#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

#include <stdio.h>

int main() 
{
    char c = 'A';
    printf("Is ascii: %d\n", ft_isascii(c));
    return (0);
}