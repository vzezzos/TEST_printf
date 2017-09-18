#include "ft_printf.h"
#include <stdio.h>

t_attrib	g_attrib[]=
{
    {'#', &f_diese},
    {'.', &f_precision},
    {'-', &f_minus},
    {'+', &f_plus},
    {'*', &f_star},
    {' ', &f_space},
    {'h', &f_short},
    {'l', &f_long},
    {'j', &f_intmax_t},
    {'z', &f_size_t}
};

int		search_modif(const char **format, t_info *tab, va_list *ap)
{
    int		i;
    t_config	config;

    ini_config(&config);
    i = 0;
    while (**format)
    {
	if (**format == 0)
	    *format += f_zero(&config, *format);
	else if (ft_isdigit(**format))
	    *format += f_width(&config, *format);
	while (i < 10)
	{
	    if (**format == g_attrib[i].attrib)
	    {
		*format += g_attrib[i].f_attrib(&config, *format);
		i = 0;
		continue;
	    }
	    i++;
	}
	break;
    }
    return (search_specifier(*format, tab, ap, &config));
}
