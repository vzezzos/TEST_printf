/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_str_ox.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 16:15:18 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:42:31 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	set_str(t_info *tab, t_info *set_flag, t_config *config, char **str)
{
	int		len;

	len = config->width - (config->ret + set_flag->index);
	while (len > 0)
	{
		if (fill_string((config->minus ? set_flag : tab), 1, &config->padding))
			return (-1);
		--len;
	}
	if (fill_string(tab, set_flag->index, set_flag->str))
		return (-1);
	free(set_flag->str);
	free(*str);
	return (0);
}
