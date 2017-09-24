#include "ft_printf.h"

int	fill_string(t_info *tab, size_t size, const char *src)
{
    if ((tab->index + size) >= tab->buf)
    {
	tab->buf += (size * 2);
	tab->str = ft_realloc(tab->str, tab->index, (size_t)tab->buf);
	if (!tab->str)
	    return (-1);
    }
    if (size)
	ft_memcpy(tab->str + tab->index, src, size);
    tab->index += size;
    if (tab->index > (long)INT_MAX + 1)
    {
	printf("tab->index-----------%ld-----------\n", tab->index);
	return (-1);
    }
    return (0);
}
