#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}

#include <stdio.h>

int main() 
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('B', 1);
    ft_putchar_fd('C', 1);
    
    return (0);
}