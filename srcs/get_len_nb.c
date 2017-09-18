#include "ft_printf.h"

int		get_len_nb(intmax_t nb)
{
    intmax_t	tmp;
    int		len;

    len = 1;
    if (nb < 0)
	nb *= -1;
    tmp = nb;
    while (tmp > 9)
    {
	tmp = tmp / 10;
	len++;
    }
    return (len);
}
