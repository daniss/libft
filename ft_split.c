/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:58:35 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/08 14:52:13 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sep(const char a, char charset)
{
	if (charset == a)
		return (1);
	return (0);
}

static int	ft_dup(const char *src, char charset)
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

static char	*ft_find(int *ind, const char *src, char charset)
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

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		n;
	int		heigh;

	i = 0;
	n = 0;
	if (s)
	{
		heigh = ft_dup(s, c) + 1;
		tab = malloc(sizeof(char *) * heigh);
		if (!tab)
			return (NULL);
		while (i < heigh - 1)
			tab[i++] = ft_find(&n, s, c);
		tab[i] = 0;
		return (tab);
	}
	return (NULL);
}
