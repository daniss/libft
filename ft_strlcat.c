/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:31:03 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/06 15:46:20 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	tailled;
	size_t	tailles;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	tailled = j;
	tailles = ft_strlen(src);
	if (dstsize == 0 || dstsize <= tailled)
		return (tailles + dstsize);
	while (src [i] != '\0' && i < dstsize - tailled - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (tailled + tailles);
}
