#include "ft_printf.h"

int	spec_S(t_info *tab, t_config *config)
{
    config->hljz = 3;
    return (spec_s(tab, config));
}
