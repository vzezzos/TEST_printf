/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 11:47:53 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 14:29:21 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		spec_lx(t_info *tab, t_config *config)
{
	config->charset = "0123456789ABCDEF";
	config->charset_pref = "0X";
	return (spec_x(tab, config));
}
