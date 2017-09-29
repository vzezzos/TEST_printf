#include "ft_printf.h"

void	ini_config(t_config *config)
{
    config->str_flag = NULL;
    config->buf = 0;
    config->diese = 0;
    config->precision = -1;
    config->minus = 0;
    config->plus = 0;
    config->star = 0;
    config->space = 0;
    config->padding = ' ';
    config->width = 0;
    config->hljz = 0;
}
