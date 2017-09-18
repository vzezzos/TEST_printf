#include "ft_printf.h"

void		*ft_realloc(void *str, size_t size_d, size_t buff)
{
    void	*tmp;

    tmp = ft_memalloc(buff);
    if (!tmp)
	return (NULL);
    if(str && size_d)
    {
	ft_memcpy(tmp, str, size_d);
        free(str);
    }
    return (tmp);
}
