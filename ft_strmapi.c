/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:33:55 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/06 15:33:55 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (s)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return (NULL);
		while (s[i])
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (NULL);
}
