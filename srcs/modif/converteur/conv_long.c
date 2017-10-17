/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:30:53 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:31:05 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_long(t_config *config, const char *format)
{
	if (config->hljz == 3)
		config->hljz = 4;
	else
		config->hljz = 3;
	return (1);
	(void)format;
}
