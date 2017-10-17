/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 15:03:28 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 15:55:55 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	set_flag_width(t_info *tab, t_config *config, char *str, int len)
{
	config->width -= len;
	if (!config->minus)
	{
		while (config->width > 0)
		{
			if (fill_string(tab, 1, " "))
				return (-1);
			--config->width;
		}
		return (fill_string(tab, len, str));
	}
	else
	{
		if (fill_string(tab, len, str))
			return (-1);
		while (config->width > 0)
		{
			if (fill_string(tab, 1, " "))
				return (-1);
			--config->width;
		}
	}
	return (0);
}

int			spec_s(t_info *tab, t_config *config)
{
	char	*str;
	int		len;

	if (config->hljz == 3)
	    return (spec_ls(tab, config));
	str = (char *)va_arg(*(config->ap), void *);
	if (!str)
		return (fill_string(tab, 6, "(null)"));
	len = ft_strlen(str);
	if (config->precision > 0 && config->precision <= len)
		len = config->precision;
	if (config->width)
		return (set_flag_width(tab, config, str, len));
	return (fill_string(tab, len, str));
}
