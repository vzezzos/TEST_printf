#include "ft_printf.h"

void	ini_config(t_config *config)
{
    config->diese = 0;
    config->precision = -1;
    config->minus = 0;
    config->plus = 0;
    config->star = 0;
    config->space = 0;
    config->zero = 0;
    config->width = 0;
    config->hljz = 0;
}
