/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_n_no_precision_xi.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 16:26:12 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:29:47 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	no_n_no_precision_xi(t_info *tab, t_config *config)
{
	if (config->width)
	{
		while (config->width > 0)
		{
			if (fill_string(tab, 1, &config->padding))
				return (-1);
			--config->width;
		}
	}
	return (0);
}
