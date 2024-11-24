#include "libft.h"

int	ft_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	else
		return (0);
}

int	ft_count_words(const char *str, char sep)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (ft_sep(str[i], sep) == 0)
		{
			if (in_word == 0)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (count);
}

char	*ft_words(const char *str, char sep)
{
	int		len;
	char	*word;

	len = 0;
	while (str[len] != '\0' && ft_sep(str[len], sep) == 0)
		len++;
	word = (char *)malloc((len + 1) * sizeof (char));
	if (word == NULL)
		return (NULL);
	word[len] = '\0';
	while (len > 0)
	{
		word[len] = str[len];
		len--;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**strs;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	strs = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		if (ft_sep(s[j], c) == 0)
		{
			strs[i] = ft_words(&s[j], c);
			i++;
			while (s[j] != '\0' && ft_sep(s[j], c) == 0)
				j++;
		}
		else
			j++;
	}
	strs[i] = NULL;
	return (strs);
}

#include <stdio.h>

int main(void)
{
    char **result;
    int i;

    result = ft_split("Bonjour tout le monde", ' ');
    i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    result = ft_split("a,b,c,d", ',');
    i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);

    return (0);
}