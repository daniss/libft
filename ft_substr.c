/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:34:20 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/06 15:34:20 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tab;
	unsigned int	i;
	unsigned int	b;

	b = 0;
	i = 0;
	if (!s)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * (len + 1));
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
