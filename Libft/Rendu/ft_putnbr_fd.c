#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;

	n_long = (long)n;
	if (n_long < 0)
	{
		write(fd, "-", 1);
		n_long = -n_long;
	}
	if (n_long >= 10)
		ft_putnbr_fd(n_long / 10, fd);
	write(fd, &"0123456789"[n_long % 10], 1);
}

#include <unistd.h>

int main() 
{
    int n = 42;
    ft_putnbr_fd(n, STDOUT_FILENO);
    return 0;
}