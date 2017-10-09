#include "ft_printf.h"

extern t_uox_hljz	g_uox_hljz[];

static int	set_flag_precision(t_config *config, t_info *set_flag, int len)
{
    int		len_str;

    len_str = config->precision - len;
    if (len_str < 1)
	return (0);
    while (len_str)
    {
	if (fill_string(set_flag, 1, "0"))
	    return (-1);
	len_str--;
    }
    return (0);
}

int			spec_X(t_info *tab, t_config *config)
{
    t_info		set_flag;
    uintmax_t		n;
    char		*str;
    int			len;

    n = g_uox_hljz[config->hljz](config->ap);
    ini_t_info(&set_flag);
    if (config->diese)
    {
	if (fill_string(&set_flag, 2, "0X"))
	    return (-1);
    }
    if (!(str = ultoa(n, "0123456789ABCDEF")))
	return (-1);
    len = ft_strlen(str);
    if (config->precision > 0)
    {
	if (set_flag_precision(config, &set_flag, len))
	    return (-1);
    }
    if (fill_string(&set_flag, len, str))
        return (-1);
    len = config->width - set_flag.index;
    while (len > 0)
    {
	if (fill_string((config->minus ? &set_flag : tab), 1, &config->padding))
	    return (-1);
	--len;
    }
    if (fill_string(tab, set_flag.index, set_flag.str))
        return (-1);
    free(set_flag.str);
    free(str);
    return (0);
}
