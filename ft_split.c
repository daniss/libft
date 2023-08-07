/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:58:35 by dcindrak          #+#    #+#             */
/*   Updated: 2023/07/23 11:35:49 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	sep(char a, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == a)
			return (1);
	}
	return (0);
}

int	ft_dup(char *src, char *charset)
{
	int	i;
	int	compt;

	compt = 0;
	i = 0;
	while (src[i])
	{
		while (sep(src[i], charset))
			i++;
		if (!sep(src[i], charset) && src[i])
		{
			compt++;
			while (!sep(src[i], charset) && src[i])
				i++;
		}
	}
	return (compt);
}

char	*ft_find(int *ind, char *src, char *charset)
{
	int		tail;
	char	*tab;
	int		i;

	i = 0;
	tail = 0;
	while (sep(src[*ind], charset))
		(*ind)++;
	while (!sep(src[*ind + tail], charset) && src[*ind + tail])
		tail++;
	tab = malloc((tail + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (i < tail)
	{
		tab[i++] = src[*ind];
		*ind = *ind + 1;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		n;
	int		taill;

	i = 0;
	n = 0;
	taill = ft_dup(str, charset) + 1;
	tab = malloc(sizeof(char *) * taill);
	if (!tab)
		return (NULL);
	while (i < taill - 1)
	{
		tab[i++] = ft_find(&n, str, charset);
	}
	tab[i] = 0;
	return (tab);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
    (void)argc;
    char **res = ft_split(argv[1], argv[2]);
    int i = 0;
    while (res[i])
    {
        printf("t[%d] = %s\n", i, res[i]);
        i++;
    }
    printf("%s",res[i]);
}*/