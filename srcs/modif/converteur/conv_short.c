#include "ft_printf.h"

int	f_short(t_config *config, const char *format)
{
    if (config->hljz == 1)
	config->hljz = 2;
    else
	config->hljz = 1;
    return (1);
    (void)format;
}
