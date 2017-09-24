#include "ft_printf.h"

int		spec_p(t_info *tab, t_config *config)
{
    uintmax_t	n;
    char	*str;
    int		len;
    int		ret;
    /* TO DO ---> cas particulier (nil) pour pointeur NULL 
     * egalement a voir pour %s				*/
    if (fill_string(tab, 2, "0x"))
	return (-1);
    n = (unsigned long)(uintptr_t)va_arg(config->ap, void *);
    if (!(str = ultoa(n, "0123456789abcdef")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
    (void)config;
}
