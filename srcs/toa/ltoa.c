/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ltoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 14:17:13 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/12 14:17:27 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*get_lmin(void)
{
	char	*str;

	if (!(str = ft_strnew(20)))
		return (NULL);
	return (ft_strcpy(str, "9223372036854775808"));
}

static int	get_lpow(intmax_t *nb, int len, int *neg)
{
	intmax_t	tmp;

	if (*nb < 0)
	{
		*neg = 1;
		(*nb) *= -1;
		len++;
	}
	tmp = *nb;
	while (tmp > 9)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

char		*ltoa(intmax_t n)
{
	char	*str;
	int		len;
	int		neg;

	if (n == LONG_MIN)
		return (get_lmin());
	len = 1;
	neg = 0;
	len = get_lpow(&n, len, &neg);
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (neg)
		str[0] = '-';
	while (len > neg)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}
