/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 14:58:19 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/29 16:36:12 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_is_valide_base(char *base)
{
	char	tab[255];
	int		i;

	i = 0;
	while (i < 255)
	{
		tab[i] = 0;
		i++;
	}
	while (*base)
	{
		if (tab[(int)*base] || *base == '+' || *base == '-')
			return (0);
		else
			tab[(int)*base] = 1;
		base++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	nb;

	len_base = ft_strlen(base);
	if (len_base == 1 || !len_base)
		return ;
	if (!ft_is_valide_base(base))
		return ;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= len_base)
		ft_putnbr_base(nb / len_base, base);
	ft_putchar(base[nb % len_base]);
}
