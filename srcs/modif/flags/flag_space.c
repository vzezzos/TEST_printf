#include "ft_printf.h"

int	f_space(t_config *config, const char *format)
{
    config->space = config->plus ? 0 : ' ';
    return (1);
    (void)format;
}
