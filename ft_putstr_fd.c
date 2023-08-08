#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = ft_strlen(s);
	write(fd, s, i);
}