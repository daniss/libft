/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:34:16 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/06 15:34:16 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inchar(char s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*tab;

	i = 0;
	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (is_inchar(s1[start], set) == 1)
		start++;
	while (is_inchar(s1[end], set) == 1)
		end--;
	if (start > end)
		return (ft_strdup(""));
	tab = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!tab)
		return (NULL);
	while (s1[start] && start < end + 1)
		tab[i++] = s1[start++];
	tab[i] = 0;
	return (tab);
}
