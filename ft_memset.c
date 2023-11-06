/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcindrak <dcindrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:32:04 by dcindrak          #+#    #+#             */
/*   Updated: 2023/11/06 15:32:04 by dcindrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = 0;
	if (!pointer)
		return (NULL);
	while (i < count)
	{
		*(unsigned char *)(pointer + i) = (unsigned char)value;
		i++;
	}
	return (pointer);
}
