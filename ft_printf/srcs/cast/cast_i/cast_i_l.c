#include "ft_printf.h"

long		cast_i_l(va_list *ap)
{
    long	n;

    return (n = va_arg(*ap, long));
}
