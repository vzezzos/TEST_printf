#include "ft_printf.h"

/* FONCTION DE CONVERSION DE WIDE CHAR */

static t_f_wctomc	g_f_wctomc[] = 
{
    &handle_default,
    &handle_one_byte,
    &handle_two_byte
/*    &handle_three_byte,
    &handle_four_byte*/
};

static int	lenwc(unsigned int n)
{
    if (n <= 0x7f)
	return (1);
    else if (n <= 0x7ff)
	return (2);
    else if (n <= 0xFFFF)
	return (3);
    else if (n <= 0x1fffff)
	return (4);
    return (0);
}

int		spec_wc(t_info *tab, t_config *config)
{
    wint_t	c;
    unsigned int n;
    int		len;

    c = va_arg(config->ap, wint_t);
    n = c;
    return (tab[lenwc(n)](tab, config));
}
