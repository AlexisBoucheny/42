#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_c;
	const unsigned char	*b_c;

	i = 0;
	b_c = (const unsigned char *)b;
	while (i < n)
	{
		if (b_c[i] == (unsigned char)c)
		{
			ptr_c = &b_c[i];
			return ((void *)ptr_c);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int main() 
{
    int n = -123;
    char *str = ft_itoa(n);
    printf("Integer to string: %s\n", str);
    free(str);
    return 0;
}
