/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:48:43 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:32:38 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			f_precision(t_config *config, const char *format)
{
	int		i;
	int		nb;

	i = 1;
	nb = 0;
	if (format[i] == '*')
	{
		nb = va_arg(*(config->ap), int);
		i += 1;
	}
	else if (ft_isdigit(format[i]))
	{
		nb = ft_atoi(format + i);
		i += get_len_nb((intmax_t)nb);
	}
	if (nb < 0)
		nb = 0;
	config->precision = nb;
	config->padding = (!nb && config->padding == '0' ? '0' : ' ');
	return (i);
}
