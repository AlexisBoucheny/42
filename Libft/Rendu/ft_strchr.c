#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (c == 0)
		return ((char *)(str + i));
	return (NULL);
}

#include <stdio.h>

int	main() 
{
	const char *str = "Hello World!";
	char *result = ft_strchr(str, 'o');
	if (result != NULL) 
		printf("Found 'o' at: %s\n", result);
	return (0);
}
