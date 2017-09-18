#include "ft_printf.h"

int			spec_d(t_info *tab, va_list *ap, t_config *config)
{
    return (spec_i(tab, ap, config));
    (void)config;
}
