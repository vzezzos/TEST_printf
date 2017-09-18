#include "ft_printf.h"

int	fill_string(t_info *tab, size_t size, const char *src)
{
    if ((tab->index + (int)size) >= tab->buf)
    {
	tab->buf += (size * 2);
	tab->str = ft_realloc(tab->str, tab->index, (size_t)tab->buf);
	if (!tab->str)
	    return (-1);
    }
    if (size)
	ft_memcpy(tab->str + tab->index, src, size);
    tab->index += size;
    return (0);
}
