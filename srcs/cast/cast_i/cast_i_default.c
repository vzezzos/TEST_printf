/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_i_default.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:23:47 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 13:25:21 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	cast_i_default(va_list *ap)
{
	return ((intmax_t)va_arg(*ap, int));
}
