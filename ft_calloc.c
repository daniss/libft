#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char    *mem;
	size_t     i;
	size_t      total;

	i = 0;
	total = count * size;
	mem = malloc(total);
	if (!mem)
		return (NULL);
	while (i < (count * size))
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}