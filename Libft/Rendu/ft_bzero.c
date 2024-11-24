#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s_c;

	i = -1;
	s_c = (unsigned char *)s;
	while (++i < n)
		*(s_c + i) = 0;
}

#include <stdio.h>

int main() 
{
    char str[] = "Hello World!";
    ft_bzero(str, 5);
    printf("After ft_bzero: '%s'\n", str);
    return 0;
}