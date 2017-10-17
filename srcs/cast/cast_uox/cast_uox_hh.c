/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_uox_hh.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:28:32 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:28:35 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t		cast_uox_hh(va_list *ap)
{
	return ((uintmax_t)(unsigned char)va_arg(*ap, unsigned int));
}
