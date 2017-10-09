#include "ft_printf.h"

static int	set_flag_width(t_info *tab, t_config *config, char *str, int len)
{
    config->width -= len;
    if (!config->minus)
    {
	while (config->width > 0)
	{
	    if (fill_string(tab, 1, " "))
		return (-1);
	    --config->width;
	}
	return (fill_string(tab, len, str));
    }
    else
    {
	if (fill_string(tab, len, str))
	    return (-1);
	while (config->width > 0)
        {
	    if (fill_string(tab, 1, " "))
	        return (-1);
	    --config->width;
	}
    }
    return (0);
}

int		spec_s(t_info *tab, t_config *config)
{
    char	*str;
    int		len;

    /* 		COMPORTEMENT A VERIFIER sur printf sys mac.
     * 		precision traité avant ou apres width
     * 		et verifier si les deux flags sont traites	*/
    str = (char *)va_arg(*(config->ap), void *);
    if (!str)
	return (fill_string(tab, 6, "(null)"));
    len = ft_strlen(str);
    if (!config->precision)
	return (0);
    if (config->precision > 0 && config->precision <= len)
	len = config->precision;
    if (config->width)
	return (set_flag_width(tab, config, str, len));
    /* COMPORTEMENT A VERIFIER sur printf sys mac. precision donnee sans nb, renvoie une chaine vide */
    return (fill_string(tab, len, str));
}
