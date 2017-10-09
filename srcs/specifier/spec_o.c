#include "ft_printf.h"

extern t_uox_hljz	g_uox_hljz[];

int		spec_o(t_info *tab, t_config *config)
{
    uintmax_t	n;
    char	*str;
    int		len;
    int		ret;

    n = g_uox_hljz[config->hljz](config->ap);
    if (config->diese == 1 && n)
    {
	if (fill_string(tab, 1, "0"))
	    return (-1);
    }
    if (!(str = ultoa(n, "01234567")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
}
