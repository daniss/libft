/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:33:07 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/06 15:33:07 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*tab;

	i = 0;
	a = 0;
	if (!s1)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		tab[a] = s1[i];
		a++;
		i++;
	}
	i = 0;
	while (s2[i])
		tab[a++] = s2[i++];
	tab[a] = 0;
	return (tab);
}
