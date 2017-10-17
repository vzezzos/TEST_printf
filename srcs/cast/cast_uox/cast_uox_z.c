/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_uox_z.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:30:03 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:30:07 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t		cast_uox_z(va_list *ap)
{
	return ((uintmax_t)(size_t)va_arg(*ap, unsigned long));
}
