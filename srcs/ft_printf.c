/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 13:19:57 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:06:19 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_func	g_tab[] =
{
	{'S', &spec_ls},
	{'C', &spec_lc},
	{'D', &spec_ld},
	{'O', &spec_lo},
	{'U', &spec_lu},
	{'X', &spec_lx},
	{'s', &spec_s},
	{'p', &spec_p},
	{'c', &spec_c},
	{'x', &spec_x},
	{'u', &spec_u},
	{'o', &spec_o},
	{'d', &spec_d},
	{'i', &spec_i},
	{0, NULL}
};

static int	check_valid_format(const char **format, t_info *tab, va_list *ap)
{
	if (**format == '%')
	{
		(*format)++;
		if (search_modif(format, tab, ap))
			return (-1);
	}
	else
	{
		if (fill_string(tab, 1, *format))
			return (-1);
	}
	return (0);
}

int			ft_printf(const char *format, ...)
{
	va_list	ap;
	t_info	tab;

	va_start(ap, format);
	ini_t_info(&tab);
	while (*format)
	{
		if (check_valid_format(&format, &tab, &ap))
			return (-1);
		format++;
	}
	if (tab.str)
	{
		write(1, tab.str, tab.index);
		free(tab.str);
	}
	va_end(ap);
	return (tab.index - tab.size_wc);
}
