#include "ft_printf.h"

int	f_precision(t_config *config, const char *format)
{
    int	i;
    int	nb;

    i = 1;
    nb = 0;
    if (format[i] == '*')
    {
	nb = va_arg(*(config->ap), int);
	i += 1;
    }
    else if (ft_isdigit(format[i]))
    {
	nb = ft_atoi(format + i);
	i += get_len_nb((intmax_t)nb);
    }
    if (nb < 0)
        nb = 0;
    config->precision = nb;
    config->padding = ' ';
    return (i);
}
