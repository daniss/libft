#include "libft.h"

static int  is_inchar(char s1, const char *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return(1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char    *tab;
	int i;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1; //jump \0
	while (is_inchar(s1[start], set) == 1)
		start++;
	while (is_inchar(s1[end], set) == 1)
		end--;
	tab = (char*)malloc(sizeof(char) * (end - start + 2));
	if(!tab)
		return (NULL);
	while(s1[start] && start < end + 1)
	{
		tab[i] = s1[start];
		i++;
		start++;
	}
	tab[i] = 0;
	return (tab);
}