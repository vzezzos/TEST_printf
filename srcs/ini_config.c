/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ini_config.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:22:55 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 14:12:00 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ini_config(t_config *config)
{
	config->str_flag = NULL;
	config->charset = "0123456789abcdef";
	config->charset_pref = "0x";
	config->ret = 0;
	config->buf = 0;
	config->diese = 0;
	config->precision = -1;
	config->minus = 0;
	config->plus = 0;
	config->star = 0;
	config->space = 0;
	config->padding = ' ';
	config->width = 0;
	config->hljz = 0;
}
