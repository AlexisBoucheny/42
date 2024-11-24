#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

#include <stdio.h>

void	ft_test(unsigned int i, char *c) 
{
	if (c) 
	{
		*c = *c + (i % 26);
	}
}

int	main(void)
{
	char str[] = "Bonjour";

	ft_striteri(str, ft_test);

	printf("Résultat après ft_striteri: %s\n", str);

	return (0);
}
