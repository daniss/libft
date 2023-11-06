/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:44:12 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/06 15:46:23 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	b;

	len = ft_strlen(src);
	b = 0;
	if (dstsize < 1)
		return (len);
	while (src[b] && b < dstsize - 1)
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (len);
}
