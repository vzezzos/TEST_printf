#include "ft_printf.h"

int		spec_c(t_info *tab, t_config *config)
{
    char	c;

    c = (char)va_arg(*(config->ap), int);
    if (fill_string(tab, 1, &c))
	return (-1);
    return (0);
}
