#include "ft_printf.h"

int	spec_U(t_info *tab, t_config *config)
{
    config->hljz = 3;
    return (spec_u(tab, config));
}
