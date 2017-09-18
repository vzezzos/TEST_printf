/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 10:40:09 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/17 15:34:31 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_intmin(void)
{
    char	*str;

    if (!(str = ft_strnew(11)))
	return (NULL);
    return (ft_strcpy(str, "-2147483648"));
}

static int	ft_get_pow(int *nb, int len, int *neg)
{
    int		tmp;

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

char		*ft_itoa(int n)
{
    char	*str;
    int		len;
    int		neg;

    len = 1;
    neg = 0;
    if (n == -2147483648)
	return (ft_itoa_intmin());
    len = ft_get_pow(&n, len, &neg);
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
