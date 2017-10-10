#include "ft_printf.h"

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

static int	set_flag_space_plus(t_config *config, t_info *tab)
{
    int		ret;

    ret = 0;
    if (config->space)
    {
	ret += 1;
	if (fill_string(tab, 1, &config->space))
	    return (-1);
    }
    if (config->padding == '0' && config->width)
    {
	ret += 1;
	if (fill_string(tab, 1, "0"))
	    return (-1);
    }
    ret = (config->padding == '0' ? ret : 0);
    return (ret);
}

int		spec_p(t_info *tab, t_config *config)
{
    uintmax_t	n;
    t_info	set_flag;
    char	*str;
    int		len;
    int		ret;
    /* TO DO ---> cas particulier (nil) pour pointeur NULL 
     * egalement a voir pour %s				*/
    n = (unsigned long)(uintptr_t)va_arg(*(config->ap), void *);
    if (!n)
	return (fill_string(tab, 5, "(nil)"));
    if (!(str = ultoa(n, config->charset)))
	return (-1);
    len = ft_strlen(str) + 2;
    ini_t_info(&set_flag);
    ret = set_flag_space_plus(config, (config->padding != '0' ? &set_flag : tab));
    if (ret == -1)
	return (-1);
    if (config->precision > 0)
    {
	if (set_flag_precision(config, &set_flag, len))
	    return (-1);
    }
    if (fill_string(&set_flag, 2, "0x"))
        return (-1);
    if (fill_string(&set_flag, len, str))
        return (-1);
    len = config->width - (ret + set_flag.index);
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
