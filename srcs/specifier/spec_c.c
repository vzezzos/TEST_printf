#include "ft_printf.h"

int		spec_c(t_info *tab, t_config *config)
{
    char	c;

    c = (char)va_arg(*(config->ap), int);
    if (config->width)
    {
	if (fill_string(tab, (size_t)config->width - 1, &config->padding))
	    return (-1);
    }
    if (fill_string(tab, 1, &c))
	return (-1);
    return (0);
}
