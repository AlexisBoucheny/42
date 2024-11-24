#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include <stdio.h>

int main() 
{
    char c = 'A';
    printf("Is alpha: %d\n", ft_isalpha(c));
    return (0);
}