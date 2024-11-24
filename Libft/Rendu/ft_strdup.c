#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*str_dup;

	str_dup = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (str_dup == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		str_dup[i] = str[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}

#include <stdio.h>

int main(void)
{
    char *str1 = "Bonjour tout le monde";
    char *str2 = "Test de duplication";
    char *dup1;
    char *dup2;

    dup1 = ft_strdup(str1);
    dup2 = ft_strdup(str2);

    if (dup1 != NULL)
        printf("Duplication 1: %s\n", dup1);
    if (dup2 != NULL)
        printf("Duplication 2: %s\n", dup2);

    free(dup1);
    free(dup2);

    return (0);
}