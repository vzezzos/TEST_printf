#include "ft_printf.h"

int	f_minus(t_config *config, const char *format)
{
    config->minus = 1;
    config->padding = ' ';
    return (1);
    (void)format;
}
