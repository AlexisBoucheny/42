#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*strjoin;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	strjoin = (char *)malloc(len * sizeof(char));
	if (strjoin == NULL)
		return (NULL);
	ft_strlcpy(strjoin, s1, ft_strlen(s1) + 1);
	ft_strlcat(strjoin, s2, len);
	return (strjoin);
}

#include <stdio.h>

int main(void)
{
    char *s1 = "Bonjour ";
    char *s2 = "tout le monde";
    char *result;

    result = ft_strjoin(s1, s2);
    if (result != NULL)
    {
        printf("Résultat de ft_strjoin: %s\n", result);
        free(result);
    }
    return (0);
}