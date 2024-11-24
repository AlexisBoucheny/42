#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
    char *s1 = "Bonjour";
    char *s2 = "Bonjour tout le monde";
    size_t n = 7;

    int result = ft_strncmp(s1, s2, n);
    printf("Résultat de ft_strncmp: %d\n", result);

    return (0);
}