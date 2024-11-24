#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (n > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < n - 1)
		{
			dest[i] = src [i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

#include <stdio.h>

int main(void)
{
    char dest[50];
    char *src = "Bonjour tout le monde";
    size_t n = 20;

    size_t result = strlcpy(dest, src, n);
    printf("Résultat de strlcpy: %s\n", dest);
    printf("Longueur de la source: %zu\n", result);

    return (0);
}