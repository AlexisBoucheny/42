#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	if (!dest || !src)
		return (NULL);
	dest_c = (unsigned char *)dest;
	src_c = (const unsigned char *)src;
	if (dest_c > src_c)
		while (n--)
			dest_c[n] = src_c[n];
	else
	{
		i = 0;
		while (n--)
		{
			dest_c[i] = src_c[i];
			i++;
		}
	}
	return (dest);
}

#include <stdio.h>

int main() 
{
    char src[] = "Je suis un test pour ft_memmove!";
    char dest[50];

    printf("Avant ft_memmove:\n");
    printf("src:  %s\n", src);
    printf("dest: '%s'\n", dest);

    ft_memmove(dest, src, 25);

    printf("\nAprès ft_memmove:\n");
    printf("src:  %s\n", src);
    printf("dest: '%s'\n", dest);

    ft_memmove(src + 3, src, 10);
    printf("\nAprès un autre ft_memmove avec chevauchement:\n");
    printf("src:  %s\n", src);

    return (0);
}