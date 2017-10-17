/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_S.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 11:51:16 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 14:28:53 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

extern t_f_wctomc	g_f_wctomc[] ;

int		spec_ls(t_info *tab, t_config *config)
{
    const wchar_t	*s;
    unsigned int	n;
    int			len;
    
    s = va_arg(config->ap, const wchar_t *);
    if (!s)
	return (fill_string(tab, 6, "(null)"));
    len = 0;
    while (s[len] != L'\0')
    {
	n = (unsigned int)s[len];
	config->ret = g_f_wctomc[lenwc(n)](tab, n);
	if (config->ret == -1)
	    return (-1);
	len++;
    }
    return (0);
}
