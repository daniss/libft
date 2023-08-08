#include "libft.h"

void	*ft_calloc(size_t count, size_t size) //same as malloc but put zeros
{
    void    *tab;

    tab = (void*)malloc(count * size);
    if (!tab)
        return(NULL);
    ft_bzero(tab, count);
    return (tab);
}