#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	if (!dest || !src)
		return (NULL);
	i = -1;
	dest_c = (unsigned char *)dest;
	src_c = (const unsigned char *)src;
	while (++i < n)
		dest_c[i] = src_c[i];
	return (dest);
}

#include <stdio.h>

int main() 
{
    char src[] = "Hello";
    char dest[6];
    ft_memcpy(dest, src, 6);  // Copy 6 characters
    printf("Dest after memcpy: %s\n", dest);
    return (0);
}