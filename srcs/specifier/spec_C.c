#include "ft_printf.h"

int	spec_C(t_info *tab, t_config *config)
{
    config->hljz = 3;
    return (spec_c(tab, config));
}
