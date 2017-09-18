#include "ft_printf.h"

int	f_precision(t_config *config, const char *format)
{
    int	i;
    int	nb;

    nb = 0;
    i = 1;
    if (format[i] && ft_isdigit(format[i]))
    {
	nb = ft_atoi(format + i);
	if (nb < 0)
	    nb = 0;
	i += get_len_nb((intmax_t)nb);
    }
    config->precision = nb;
    return (i);
}
