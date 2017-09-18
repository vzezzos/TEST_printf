#include "ft_printf.h"

extern t_uox_hljz	g_uox_hljz[];

int		spec_o(t_info *tab, va_list *ap, t_config *config)
{
    uintmax_t	n;
    char	*str;
    int		len;
    int		ret;

    if (config->diese == 1)
    {
	if (fill_string(tab, 1, "0"))
	    return (-1);
    }
    n = g_uox_hljz[config->hljz](ap);
    if (!(str = ultoa(n, "01234567")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
}
