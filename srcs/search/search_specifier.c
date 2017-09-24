#include "ft_printf.h"

extern t_func	g_tab[];

int		search_specifier(const char *format, t_info *tab, t_config *config)
{
    int		i;

    i = 0;
    while (g_tab[i].specifier)
    {
	if (g_tab[i].specifier == *format)
	    return (g_tab[i].f_spec(tab, config));
	i++;
    }
    if (no_specifier(tab, *format))
	return (-1);
    return (0);
}
