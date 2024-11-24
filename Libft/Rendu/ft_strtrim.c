#include "libft.h"

int	ft_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_init_start(char const *str, char const *set, size_t start)
{
	while (str[start] != '\0' && ft_in_set(str[start], set) == 1)
		start++;
	return (start);
}

size_t	ft_init_end(char const *str, char const *set, size_t end)
{
	while (end > 0 && ft_in_set(str[end], set) == 1)
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t	start;
	size_t	end;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_init_start(s1, set, 0);
	end = ft_init_end(s1, set, ft_strlen(s1) - 1);
	if (end >= start)
		len = end - start + 1;
	else
		len = 0;
	strtrim = (char *)malloc((len + 1) * sizeof(char));
	if (strtrim == NULL)
		return (NULL);
	ft_strlcpy(strtrim, &s1[start], len + 1);
	return (strtrim);
}

#include <stdio.h>

int main() 
{
    char *result = ft_strtrim("   Hello World!   ", " ");
    printf("'%s'\n", result);
    free(result);
    return 0;
}
