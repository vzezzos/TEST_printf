#include "ft_printf.h"

int	spec_O(t_info *tab, t_config *config)
{
    config->hljz = 3;
    return (spec_o(tab, config));
}
