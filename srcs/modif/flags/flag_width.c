/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:32:59 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:08:44 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* TO DO INT MIN */

int	f_width(t_config *config, const char *format)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (format[i] == '*')
	{
		nb += va_arg(*(config->ap), int);
		if (nb < 0)
		{
			nb *= -1;
			f_minus(config, format);
		}
		i += 1;
	}
	else if (ft_isdigit(format[i]))
	{
		nb += ft_atoi(format + i);
		if (nb < 0)
			return (-1);
		i += get_len_nb((intmax_t)nb);
	}
	config->width = nb;
	return (i);
}
