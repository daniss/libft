#include "libft.h"

void *ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = 0;
	while(i < count)
	{
		*(unsigned char *)pointer = (unsigned char)value;
		pointer++;
		i++;
	}
	return (pointer);
}

/*int main()
{
	int i = 0;
	char buff[10];
	ft_memset(buff, 'a', 5);
	while(i < 10)
	{	
		printf("%c", buff[i]);
		i++;
	}
}*/