#include "ft_printf.h"

int	f_star(t_config *config, const char *format)
{
    int	i;
    int	len;

    if (!config->star && !config->width)
    {
	config->star = 1;
	return (f_width(config, format));
    }
    else
    {
	i = 0;
	len = ft_strlen(config->str_flag);
	config->buf +=  ft_strlen(format);
	config->str_flag = ft_realloc(config->str_flag, len, config->buf);
	while (format[i] && format[i] != '%')
	    i++;
	ft_memcpy(config->str_flag, format, i);
    }
    return (i);
}
