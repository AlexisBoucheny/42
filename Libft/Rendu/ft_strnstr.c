#include "libft.h"

char	*ft_strnstr(const char *s_main, const char *s_sec, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s_sec[i] == '\0')
		return ((char *)s_main);
	while (i < n && s_main[i] != '\0')
	{
		j = 0;
		while (i + j < n && s_main[i + j] != '\0' && s_main[i + j] == s_sec[j])
		{
			j++;
			if (s_sec[j] == '\0')
				return ((char *)&s_main[i]);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
    char *s_main = "Bonjour tout le monde";
    char *s_sec = "tout";
    size_t n = 20;

    char *result = ft_strnstr(s_main, s_sec, n);
    if (result != NULL)
        printf("Résultat de ft_strnstr: %s\n", result);
    else
        printf("Sous-chaîne non trouvée.\n");

    return (0);
}