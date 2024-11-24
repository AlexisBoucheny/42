#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t n)
{
	size_t				i;
	const unsigned char	*b1_c;
	const unsigned char	*b2_c;

	i = 0;
	b1_c = (const unsigned char *)b1;
	b2_c = (const unsigned char *)b2;
	while (i < n)
	{
		if (b1_c[i] != b2_c[i])
			return (b1_c[i] - b2_c[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main() 
{
    char src[] = "Hello";
    char dest[6];
    ft_memcpy(dest, src, 6);  // Copy 6 characters
    printf("Dest after memcpy: %s\n", dest);
    return 0;
}