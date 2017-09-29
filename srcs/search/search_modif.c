#include "ft_printf.h"
#include <stdio.h>

t_attrib	g_attrib[]=
{
    {'#', &f_diese},
    {'.', &f_precision},
    {'-', &f_minus},
    {'+', &f_plus},
    {' ', &f_space},
    {'0', &f_zero},
    {'1', &f_width},
    {'2', &f_width},
    {'3', &f_width},
    {'4', &f_width},
    {'5', &f_width},
    {'6', &f_width},
    {'7', &f_width},
    {'8', &f_width},
    {'9', &f_width},
    {'*', &f_width},
    {'h', &f_short},
    {'l', &f_long},
    {'j', &f_intmax_t},
    {'z', &f_size_t},
    {0, NULL}
};

int		search_modif(const char **format, t_info *tab, va_list *ap)
{
    int		i;
    int		ret;
    t_config	config;

    ini_config(&config);
    config.ap = ap;
    i = 0;
    while (**format)
    {
	while (g_attrib[i].attrib)
	{
	    if (**format == g_attrib[i].attrib)
	    {
		ret = g_attrib[i].f_attrib(&config, *format);
		if (ret < 0)
		    return (-1);
		*format += ret; 
		i = 0;
		continue;
	    }
	    i++;
	}
	break;
    } 
    return (search_specifier(*format, tab, &config));
}
