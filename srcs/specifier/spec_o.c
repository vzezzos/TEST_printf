/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:07:18 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:35:51 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

extern t_uox_hljz	g_uox_hljz[];

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

static int	set_flag_diese(t_config *config, t_info *tab, uintmax_t n)
{
	int		ret;

	ret = 0;
	if (config->diese && n)
	{
		ret = 1;
		if (fill_string(tab, 1, "0"))
			return (-1);
	}
	ret = (config->padding == '0' ? ret : 0);
	return (ret);
}

static int	no_n_no_precision(t_info *tab, t_config *config)
{
	if (config->diese)
	{
		if (fill_string(tab, 1, "0"))
			return (-1);
	}
	if (config->width)
	{
		while (config->width > 0)
		{
			if (fill_string(tab, 1, &config->padding))
				return (-1);
			--config->width;
		}
	}
	return (0);
}

int			spec_o(t_info *tab, t_config *config)
{
	t_info		set_flag;
	uintmax_t	n;
	char		*str;
	int			len;

	n = g_uox_hljz[config->hljz](config->ap);
	if (!n && !config->precision)
		return (no_n_no_precision(tab, config));
	ini_t_info(&set_flag);
	if ((config->ret = set_flag_diese(config,\
					(config->padding != '0' ? &set_flag : tab), n)) == -1)
		return (-1);
	if (!(str = ultoa(n, "01234567")))
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
