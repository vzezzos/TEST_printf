/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:40:22 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 17:03:22 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

static int	set_flag_pref(t_config *config, t_info *tab, uintmax_t n)
{
	int		ret;

	ret = 0;
	if (n)
	{
		ret += 2;
		if (fill_string(tab, 2, config->charset_pref))
			return (-1);
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

static int	set_width(t_info *tab, t_info *set_flag, t_config *config, int ret)
{
	int		len;

	len = config->width - (ret + set_flag->index);
	while (len > 0)
	{
		if (fill_string((config->minus ? set_flag : tab), 1, &config->padding))
			return (-1);
		--len;
	}
	if (fill_string(tab, set_flag->index, set_flag->str))
		return (-1);
	return (0);
}

static int	set_strp(t_info *tab, t_info *set_flag, t_config *config, char *str)
{
	int		len;

	len = ft_strlen(str);
	if (config->precision > 0)
	{
		if (set_flag_precision(config, set_flag, len))
			return (-1);
	}
	if (fill_string(set_flag, len, str))
		return (-1);
	if (set_width(tab, set_flag, config, config->ret))
		return (-1);
	return (0);
}

int			spec_p(t_info *tab, t_config *config)
{
	uintmax_t	n;
	t_info		set_flag;
	char		*str;

	n = (unsigned long)(uintptr_t)va_arg(*(config->ap), void *);
	if (!n && !config->precision)
		return (fill_string(tab, 2, config->charset_pref));
	if (!n)
		str = "0x0";
	else if (!(str = ultoa(n, config->charset)))
		return (-1);
	ini_t_info(&set_flag);
	if ((config->ret = set_flag_pref(config, \
					(config->padding != '0' ? &set_flag : tab), n)) == -1)
		return (-1);
	if (set_strp(tab, &set_flag, config, str))
		return (-1);
	free(set_flag.str);
	if (n)
		free(str);
	return (0);
}
