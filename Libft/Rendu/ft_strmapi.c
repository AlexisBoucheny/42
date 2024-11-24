#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	return (new_str);
}

#include <stdio.h>

char	ft_test(unsigned int i, char c) 
{
	return (c + i % 26);
}

int 	main() 
{
	char const *str1 = "hello";
	char const *str2 = "";
	char const *str3 = "42";

	char *result1 = ft_strmapi(str1, ft_test);
	char *result2 = ft_strmapi(str2, ft_test);
	char *result3 = ft_strmapi(str3, ft_test);

	printf("Input: %s, Output: %s\n", str1, result1);
	printf("Input: %s, Output: %s\n", str2, result2);
	printf("Input: %s, Output: %s\n", str3, result3);

	if (result1) free(result1);
	if (result2) free(result2);
	if (result3) free(result3);

	return (0);
}
