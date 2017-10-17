/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:03:55 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:34:04 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_zero(t_config *config, const char *format)
{
	config->padding = '0';
	if (config->minus || config->precision > 0)
		config->padding = ' ';
	return (1);
	(void)format;
}
