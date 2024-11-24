#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	conv;

	i = 0;
	sign = 1;
	conv = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = conv * 10 + (str[i] - 48);
		i++;
	}
	return (conv * sign);
}

#include <stdio.h>

int main()
{
    const char *str = "  -12345abc";
    int result = ft_atoi(str);
    printf("Converted number: %d\n", result);
    return (0);
}