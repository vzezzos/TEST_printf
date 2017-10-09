#include "ft_printf.h"

int	f_zero(t_config *config, const char *format)
{
    config->padding = '0';
    if (config->minus)
	config->padding = ' ';
    return (1);
    (void)format;
}
