/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:32:03 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:32:08 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	f_minus(t_config *config, const char *format)
{
	config->minus = 1;
	config->padding = ' ';
	return (1);
	(void)format;
}
