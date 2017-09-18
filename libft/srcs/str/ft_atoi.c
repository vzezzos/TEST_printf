/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 13:17:43 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/13 13:39:02 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		neg;
	long	res;
	long	tmp;

	while (*str && ft_isspace(*str))
		str++;
	neg = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	res = 0;
	while (*str && ft_isdigit(*str))
	{
		tmp = res;
		res = (res * 10) + (*str - '0');
		if (tmp > res)
			return (neg ? 0 : -1);
		str++;
	}
	return (neg ? (int)-res : (int)res);
}
