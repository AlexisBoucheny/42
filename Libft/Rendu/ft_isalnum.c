#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#include <stdio.h>

int main() 
{
    char c = 'a';
    printf("Is alnum: %d\n", ft_isalnum(c));
    return (0);
}