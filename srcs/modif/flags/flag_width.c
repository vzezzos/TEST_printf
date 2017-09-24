#include "ft_printf.h"

int	f_width(t_config *config, const char *format)
{
    int	i;
    int	nb;

    i = 0;
    nb = 0;
    if (format[i] == '*')
    {
	nb = va_arg(*(config->ap), int);
	if (nb < 0)
	{
	    nb *= -1;
	    f_minus(config, format);
	}
	i += 1;
    }
    else if (ft_isdigit(format[i]))
    {
	nb = ft_atoi(format + i);
	if (nb < 0)
	    return (-1);
	i += get_len_nb((intmax_t)nb);
    }
    config->width = nb;
    return (i);
}
