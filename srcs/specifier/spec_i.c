#include "ft_printf.h"

static t_i_hljz		g_i_hljz[]=
{
    &cast_i_default,
    &cast_i_h,
    &cast_i_hh,
    &cast_i_l,
    &cast_i_ll,
    &cast_i_j,
    &cast_i_z
};

int		spec_i(t_info *tab, t_config *config)
{
    intmax_t	n;
    int		len;
    int		len_n;
    char	*str;

    n = g_i_hljz[config->hljz](config->ap);
    len_n = get_len_nb(n);
    if (config->precision)
    {
	while (config->precision > len_n)
	{
	    if (fill_string(tab, 1, "0"))
		return (-1);
	    config->precision--;
	}
    }
    if (!(str = ltoa(n)))
	return (-1);
    len = ft_strlen(str);
    if (fill_string(tab, len, str))
        return (-1);
    free(str);
    return (0);
}
