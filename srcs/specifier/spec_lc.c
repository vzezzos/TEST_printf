/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_C.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 11:46:27 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 14:28:32 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_f_wctomc	g_f_wctomc[] = 
{
    &handle_default,
    &handle_one_byte,
    &handle_two_byte,
    &handle_three_byte,
    &handle_four_byte
};

int		lenwc(unsigned int n)
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

int		spec_lc(t_info *tab, t_config *config)
{
    wint_t	c;
    unsigned int n;

    c = va_arg(config->ap, wint_t);
    n = c;
    return (g_f_wctomc[lenwc(n)](tab, n));
}
