#include "ft_printf.h"

int	f_long(t_config *config, const char *format)
{
    if (config->hljz == 3)
	config->hljz = 4;
    else
	config->hljz = 3;
    return (1);
    (void)format;
}
