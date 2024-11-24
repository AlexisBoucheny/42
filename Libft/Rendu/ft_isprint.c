#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 127);
}

#include <stdio.h>

int main() 
{
    char c = 'A';
    printf("Is print: %d\n", ft_isprint(c));
    return 0;
}