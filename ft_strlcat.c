/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:31:03 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/08 14:40:01 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	cur;

	if (dest == NULL && dstsize == 0)
	{
		return (0);
	}
	src_len = ft_strlen(dest);
	cur = 0;
	if (dstsize <= src_len)
		return (ft_strlen(src) + dstsize);
	while (src[cur] && (src_len + cur) < (dstsize - 1))
	{
		dest[src_len + cur] = src[cur];
		cur++;
	}
	dest[src_len + cur] = 0;
	return (ft_strlen(src) + src_len);
}
