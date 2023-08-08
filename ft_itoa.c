#include "libft.h"

static int	ft_len(int nbr)
{
	int	i;

	i = 0;
	if(nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while(nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ren;
	int		tai;
	int		i;
	long	nb;

	nb = n;
	i = -1;
	tai = ft_len(nb) + 1;
	ren = malloc(sizeof(char) * tai);
    if (!ren)
        return (NULL);
	if (nb < 0)
    {
        ren[0] = '-';
        nb = -nb;
		i = 0;
    }
	ren[--tai] = 0;
	tai--;
	while (tai > i)
	{
		ren[tai] = nb % 10 + 48;
		nb /= 10;
		tai--;
	}
	return(ren);
}