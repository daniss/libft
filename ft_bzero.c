#include "libft.h"

void	ft_bzero(void *s, size_t n) //Put zeros in the str*
{
	size_t  i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)s = 0;
		s++;
		i++;
	}
}