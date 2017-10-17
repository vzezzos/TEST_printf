/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:16:14 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:45:41 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_i_hljz		g_i_hljz[] =
{
	&cast_i_default,
	&cast_i_h,
	&cast_i_hh,
	&cast_i_l,
	&cast_i_ll,
	&cast_i_j,
	&cast_i_z
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

static int	set_flag_space_plus(t_config *config, t_info *tab, intmax_t *n)
{
	int		ret;

	ret = 0;
	if (config->space && *n >= 0)
	{
		ret += 1;
		if (fill_string(tab, 1, &config->space))
			return (-1);
	}
	if (*n < 0 || config->plus)
	{
		ret += 1;
		if (fill_string(tab, 1, (*n < 0 ? "-" : "+")))
			return (-1);
		if (*n < 0)
			*n *= -1;
	}
	/*
	if (config->padding == '0' && config->width)
	{
		ret += 1;
		if (fill_string(tab, 1, "0"))
			return (-1);
	}
	*/
	ret = (config->padding == '0' ? ret : 0);
	return (ret);
}

int			spec_i(t_info *tab, t_config *config)
{
	intmax_t	n;
	t_info		set_flag;
	int			len;
	char		*str;

	n = g_i_hljz[config->hljz](config->ap);
	if (!n && !config->precision)
		return (no_n_no_precision_xi(tab, config));
	ini_t_info(&set_flag);
	if ((config->ret = set_flag_space_plus(config, \
					(config->padding != '0' ? &set_flag : tab), &n)) == -1)
		return (-1);
	if (!(str = ltoa(n)))
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
