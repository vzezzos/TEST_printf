#include "ft_printf.h"

int	f_zero(t_config *config, const char *format)
{
    config->star = 1;
    return (1);
    (void)format;
}
