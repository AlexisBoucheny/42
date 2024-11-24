#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	if (s != NULL)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

int main(void)
{
    ft_putendl_fd("Bonjour tout le monde", 1);
    ft_putendl_fd("Erreur détectée", 2);
    ft_putendl_fd("", 1);
    ft_putendl_fd(NULL, 1);

    return (0);
}
