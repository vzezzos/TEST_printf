/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:31:08 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:31:13 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_short(t_config *config, const char *format)
{
	if (config->hljz == 1)
		config->hljz = 2;
	else
		config->hljz = 1;
	return (1);
	(void)format;
}
