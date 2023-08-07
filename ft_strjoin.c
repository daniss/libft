/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:45:41 by dcindrak          #+#    #+#             */
/*   Updated: 2023/07/19 13:38:30 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(char *st)
{
	int	i;

	i = 0;
	while (st[i])
		i++;
	return (i);
}

int	ft_heightotal(char **strs, int size)
{
	int	i;
	int	totaltail;

	totaltail = 0;
	i = 0;
	while (i < size)
	{
		totaltail += ft_len(strs[i]);
		i++;
	}
	return (totaltail);
}

int	ft_tail(char *sep, int size, char **strs)
{
	int	taill;

	taill = ft_len(sep) * (size - 1) + ft_heightotal(strs, size);
	return (taill);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ec;
	int		j;
	int		x;
	int		i;

	j = 0;
	x = 0;
	ec = (char *)malloc(ft_tail(sep, size, strs) * sizeof(char));
	i = 0;
	if (size == 0)
		return (ec);
	if (!ec)
		return (NULL);
	while (i < size)
	{
		while (strs[i][j])
			ec[x++] = strs[i][j++];
		j = 0;
		while (j < ft_len(sep) && x < ft_tail(sep, size, strs))
			ec[x++] = sep[j++];
		j = 0;
		i++;
	}
	return (ec);
}
/*#include <stdio.h>

int main()
{
    char *tab[] = {"salut","comment","ca","va","?"};
    char *r = ft_strjoin(5, tab, " ");
    printf("%s",r);
}*/
