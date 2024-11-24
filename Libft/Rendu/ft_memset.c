#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_c;
	unsigned char	c_c;

	i = 0;
	ptr_c = (unsigned char *)ptr;
	c_c = (unsigned char)c;
	while (i < n)
		ptr_c[i++] = c_c;
	return (ptr);
}

#include <stdio.h>

int main() 
{
    char str[50] = "Bonjour, voici un exemple pour ft_memset";
    
    printf("Avant ft_memset:\n");
    printf("str: %s\n", str);
    
    ft_memset(str, 'X', 10);

    printf("\nAprès ft_memset:\n");
    printf("str: %s\n", str);

    return (0);
}