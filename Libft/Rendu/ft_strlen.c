#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int main(void)
{
    char *str = "Bonjour tout le monde";

    int len = ft_strlen(str);
    printf("Longueur de la chaîne: %d\n", len);

    return (0);
}
