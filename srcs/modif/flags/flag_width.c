#include "ft_printf.h"

int	f_width(t_config *config, const char *format)
{
    config->width = 1;
    return (1);
    (void)format;
}
