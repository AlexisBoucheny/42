#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dest_len >= n)
		return (src_len + n);
	if (n > 0)
	{
		i = 0;
		while (src[i] != '\0' && dest_len + i < n - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (src_len + dest_len);
}

#include <stdio.h>

int main(void)
{
    char dest[50] = "Bonjour ";
    char *src = "tout le monde";
    size_t n = 20;

    size_t result = ft_strlcat(dest, src, n);
    printf("Résultat de ft_strlcat: %s\n", dest);
    printf("Longueur totale attendue: %zu\n", result);

    return (0);
}
