#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		size;
	char	*substr;

	if (s == NULL)
		return (NULL);
	else if (start > (unsigned int)ft_strlen(s))
		size = 0;
	else if (start + len > (size_t)ft_strlen(s))
		size = ft_strlen(s) - start;
	else
		size = len;
	substr = (char *)malloc((size + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < size && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

#include <stdio.h>

int	main(void) 
{
	char *str = "Hello World!";
	char *sub = ft_substr(str, 6, 5);
	printf("'%s'\n", sub);
	free(sub);
	return (0);
}
