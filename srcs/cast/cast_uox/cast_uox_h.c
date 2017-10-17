/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_uox_h.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:28:24 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:28:29 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t		cast_uox_h(va_list *ap)
{
	return ((uintmax_t)(unsigned short)va_arg(*ap, unsigned int));
}
