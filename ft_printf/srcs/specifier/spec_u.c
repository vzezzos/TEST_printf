#include "ft_printf.h"

t_uox_hljz	g_uox_hljz[]=
{
    &cast_uox_default,
    &cast_uox_h,
    &cast_uox_hh,
    &cast_uox_l,
    &cast_uox_ll,
    &cast_uox_j,
    &cast_uox_z
};

int			spec_u(t_info *tab, va_list *ap, t_config *config)
{
    uintmax_t		n;
    char		*str;
    int			len;
    int			ret;

    n = g_uox_hljz[config->hljz](ap);
    if (!(str = ultoa(n, "0123456789")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
    (void)config;
}
