#include "ft_printf.h"

int			spec_s(t_info *tab, va_list *ap, t_config *config)
{
    char		*str;
    int			len;

    str = (char *)va_arg(*ap, void *);
    len = ft_strlen(str);
    if (fill_string(tab, len, str))
	return (-1);
    return (0);
    (void)config;
}
