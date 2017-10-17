/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 13:49:47 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:40:51 by vzezzos          ###   ########.fr       */
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
		ret = 2;
		if (fill_string(tab, 2, config->charset_pref))
			return (-1);
	}
	ret = (config->padding == '0' ? ret : 0);
	return (ret);
}

int			spec_x(t_info *tab, t_config *config)
{
	t_info		set_flag;
	uintmax_t	n;
	char		*str;
	int			len;

	n = g_uox_hljz[config->hljz](config->ap);
	if (!n && !config->precision)
		return (no_n_no_precision_xi(tab, config));
	ini_t_info(&set_flag);
	if ((config->ret = set_flag_diese(config, \
					(config->padding != '0' ? &set_flag : tab), n)) == -1)
		return (-1);
	if (!(str = ultoa(n, config->charset)))
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
