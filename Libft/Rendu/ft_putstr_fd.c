#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

int main(void)
{
    ft_putstr_fd("Bonjour tout le monde", 1);
    ft_putstr_fd("Erreur détectée", 2);
    ft_putstr_fd("", 1);
    ft_putstr_fd(NULL, 1);

    return (0);
}
