#include "libft.h"

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*alloc;

	if (nbr >= SIZE_MAX / size)
		return (NULL);
	alloc = NULL;
	alloc = malloc(nbr * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, nbr * size);
	return (alloc);
}

#include <stdio.h>

int main(void)
{
    size_t nbr = 5;
    size_t size = sizeof(int);
    int *arr = ft_calloc(nbr, size);
    
    if (arr != NULL)
    {
        size_t i = 0;
        while (i < nbr)
        {
            printf("arr[%zu] = %d\n", i, arr[i]);
            i++;
        }
        free(arr);
    }
    else
    {
        printf("Échec de l'allocation mémoire.\n");
    }
    return (0);
}