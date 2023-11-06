/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:34:11 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/06 15:34:11 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	pos = -1;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			pos = i;
		i++;
	}
	if (s[i] == c)
		return ((char *)(s + i));
	if (pos > -1)
		return ((char *)(s + pos));
	return (NULL);
}
