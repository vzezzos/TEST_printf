/* ************************************************************************** */
/*					*/
/*				:::	  ::::::::   */
/*   test.c			 :+:	  :+:	:+:   */
/*				+:+ +:+	 +:+	 */
/*   By: vzezzos <marvin@42.fr>		 +#+  +:+	   +#+	*/
/*			+#+#+#+#+#+   +#+	   */
/*   Created: 2017/04/29 14:07:57 by vzezzos	   #+#	#+#	 */
/*   Updated: 2017/04/29 17:38:56 by vzezzos	  ###   ########.fr	   */
/*					*/
/* ************************************************************************** */

#include "ft_printf.h"

t_func	   g_tab[] =
{
    {'s', &spec_s},
    {'p', &spec_p},
    {'c', &spec_c},
    {'x', &spec_x},
    {'u', &spec_u},
    {'o', &spec_o},
    {'d', &spec_d},
    {'i', &spec_i}
};

int		ft_printf(const char *format, ...)
{
    va_list	ap;
    t_info	tab;

    va_start(ap, format);
    tab.buf = 0;
    tab.index = 0;
    tab.str = NULL;
    while (*format)
    {
	if (*format == '%')
	{
	    format++;
	    if (search_modif(&format, &tab, &ap))
		return (-1);
  	}
	else
	{
	    if (fill_string(&tab, 1, format))
		return (-1);
	}
	format++;
    }
    ft_putstr(tab.str);
    free(tab.str);
    va_end(ap);
    return (tab.index);
}
