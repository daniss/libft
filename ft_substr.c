#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tab;
	unsigned int i;
	unsigned int b;

	b = 0;
	i = 0;
	tab = (char*)malloc(sizeof(char) * len);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (i >= start && b < len)
		{
			tab[b] = s[i];
			b++;
		}
		i++;
	}
	tab[b] = 0;
	return (tab);
}