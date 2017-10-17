/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_specifier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:39:04 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 14:00:28 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	set_with_minus(t_info *tab, t_config *config, char *c)
{
	if (fill_string(tab, 1, c))
		return (-1);
	if (config->width)
	{
		while (--config->width > 0)
		{
			if (fill_string(tab, 1, &config->padding))
				return (-1);
		}
	}
	return (0);
}

int			no_specifier(t_info *tab, t_config *config, char c)
{
	if (config->minus)
	{
		return (set_with_minus(tab, config, &c));
	}
	else
	{
		if (config->width)
		{
			while (--config->width > 0)
			{
				if (fill_string(tab, 1, &config->padding))
					return (-1);
			}
		}
	}
	return (fill_string(tab, 1, &c));
}
