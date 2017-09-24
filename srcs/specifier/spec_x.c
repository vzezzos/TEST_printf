#include "ft_printf.h"

extern t_uox_hljz	g_uox_hljz[];

int			spec_x(t_info *tab, t_config *config)
{
    uintmax_t		n;
    char		*str;
    int			len;
    int			ret;

    if (config->diese == 1)
    {
	if (fill_string(tab, 2, "0x"))
	    return (-1);
    }
    n = g_uox_hljz[config->hljz](config->ap);
    if (!(str = ultoa(n, "0123456789abcdef")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
}
