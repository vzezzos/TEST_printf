#include "ft_printf.h"

int		no_specifier(t_info *tab, char c)
{
    if (fill_string(tab, 1, &c))
	return (-1);
    return (0);
}
