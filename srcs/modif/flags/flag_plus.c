#include "ft_printf.h"

int	f_plus(t_config *config, const char *format)
{
    config->plus = 1;
    config->space = 0;
    return (1);
    (void)format;
}
