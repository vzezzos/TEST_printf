#include "ft_printf.h"

extern t_func	g_tab[];

int		search_specifier(const char *format, t_info *tab, va_list *ap, t_config *config)
{
    int		i;

    i = 0;
    while (i < 8)
    {
	if (g_tab[i].specifier == *format)
	    return (g_tab[i].f_spec(tab, ap, config));
	i++;
    }
    if (no_specifier(tab, *format))
	return (-1);
    return (0);
}
