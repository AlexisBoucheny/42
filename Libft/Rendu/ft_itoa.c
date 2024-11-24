#include "libft.h"

int	ft_nbr_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	n_long;
	int		len;
	char	*str;

	n_long = (long)n;
	len = ft_nbr_len(n_long);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n_long < 0)
	{
		str[0] = '-';
		n_long = -n_long;
	}
	while (n_long >= 10)
	{
		str[--len] = (n_long % 10) + '0';
		n_long /= 10;
	}
	str[--len] = n_long + '0';
	return (str);
}

#include <stdio.h>

int main() 
{
    int n = -123;
    char *str = ft_itoa(n);
    printf("Integer to string: %s\n", str);
    free(str);
    return (0);
}