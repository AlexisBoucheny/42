#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char *str = "Bonjour tout le monde";
	int c = 'o';

	char *result = ft_strrchr(str, c);
	if (result != NULL)
		printf("Résultat de ft_strrchr: %s\n", result);
	else
		printf("Caractère non trouvé.\n");

	return (0);
}
