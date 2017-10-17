/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:39:17 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 15:41:39 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			spec_c(t_info *tab, t_config *config)
{
	unsigned char	c;
	int				len;

	if (config->hljz == 3)
	    return (spec_lc(tab, config));
	c = (unsigned char)va_arg(*(config->ap), int);
	if (config->minus)
	{
		if (fill_string(tab, 1, (const char *)&c))
			return (-1);
	}
	if (config->width)
	{
		len = config->width - 1;
		while (len > 0)
		{
			if (fill_string(tab, 1, " "))
				return (-1);
			len--;
		}
	}
	if (!config->minus)
	{
		if (fill_string(tab, 1, (const char *)&c))
			return (-1);
	}
	return (0);
}
