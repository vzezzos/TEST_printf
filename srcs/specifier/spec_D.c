#include "ft_printf.h"

int	spec_D(t_info *tab, t_config *config)
{
    config->hljz = 3;
    return (spec_d(tab, config));
}
