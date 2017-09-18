#include "ft_printf.h"

int	f_star(t_config *config, const char *format)
{
    config->star = 1;
    return (1);
    (void)format;
}
