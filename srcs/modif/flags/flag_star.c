/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_star.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:32:49 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:34:39 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_star(t_config *config, const char *format)
{
	int	i;
	int	len;

	if (!config->star && !config->width)
	{
		config->star = 1;
		return (f_width(config, format));
	}
	else
	{
		i = 0;
		len = ft_strlen(config->str_flag);
		config->buf += ft_strlen(format);
		config->str_flag = ft_realloc(config->str_flag, len, config->buf);
		while (format[i] && format[i] != '%')
			i++;
		ft_memcpy(config->str_flag, format, i);
	}
	return (i);
}
