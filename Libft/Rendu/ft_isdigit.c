#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

#include <stdio.h>

int main() 
{
    char c = '5';
    printf("Is digit: %d\n", ft_isdigit(c));
    return (0);
}