/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:41:15 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:45:15 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_uox_hljz	g_uox_hljz[] =
{
	&cast_uox_default,
	&cast_uox_h,
	&cast_uox_hh,
	&cast_uox_l,
	&cast_uox_ll,
	&cast_uox_j,
	&cast_uox_z
};

static int	set_flag_precision(t_config *config, t_info *set_flag, int len)
{
	int		len_str;

	len_str = config->precision - len;
	if (len_str < 1)
		return (0);
	while (len_str)
	{
		if (fill_string(set_flag, 1, "0"))
			return (-1);
		len_str--;
	}
	return (0);
}

int			spec_u(t_info *tab, t_config *config)
{
	t_info		set_flag;
	uintmax_t	n;
	char		*str;
	int			len;

	n = g_uox_hljz[config->hljz](config->ap);
	ini_t_info(&set_flag);
	if (!(str = ultoa(n, "0123456789")))
		return (-1);
	len = ft_strlen(str);
	if (config->precision > 0)
	{
		if (set_flag_precision(config, &set_flag, len))
			return (-1);
	}
	if (fill_string(&set_flag, len, str))
		return (-1);
	return (set_str(tab, &set_flag, config, &str));
}
