#include "ft_printf.h"

long		cast_i_h(va_list *ap)
{
    long	n;

    return (n = (long)(short)va_arg(*ap, int));
}
