#include "ft_printf.h"
#include <stdio.h>

int	handle_default(t_info *tab, unsigned int n)
{
    return (-1);
    (void)tab;
    (void)n;
}

int	handle_one_byte(t_info *tab, unsigned int n)
{
    if (fill_string(tab, 1, (const char *)&n))
	return (-1);
    return (0);
}

int	handle_two_byte(t_info *tab, unsigned int n)
{
    unsigned char	mask[2];
    unsigned char	c;

    mask[0] = 0x80;
    mask[1] = 0xC0;
    c = (n << 21) >> 27;
    c = mask[1] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    c = (n << 26) >> 26;
    c = mask[0] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    return (0);
}

int	handle_three_byte(t_info *tab, unsigned int n)
{
    unsigned char	mask[3];
    unsigned char	c;

    mask[0] = 0x80;
    mask[1] = 0x80;
    mask[2] = 0xE0;

    c = (n << 12) >> 28;
    c = mask[2] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    c = (n << 18) >> 26;
    c = mask[1] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    c = (n << 26) >> 26;
    c = mask[0] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    tab->size_wc += 1;
    return (0);
}

int	handle_four_byte(t_info *tab, unsigned int n)
{
    unsigned char	mask[4];
    unsigned char	c;

    mask[0] = 0x80;
    mask[1] = 0x80;
    mask[2] = 0x80;
    mask[3] = 0xF0;

    c = (n << 21) >> 27;
    c = mask[3] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    c = (n << 12) >> 28;
    c = mask[2] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    c = (n << 18) >> 26;
    c = mask[1] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    c = (n << 26) >> 26;
    c = mask[0] | c;
    if (fill_string(tab, 1, (const char *)&c))
	return (-1);
    tab->size_wc += 2;
    return (0);
}
