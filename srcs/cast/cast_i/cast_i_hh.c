#include "ft_printf.h"

long		cast_i_hh(va_list *ap)
{
    long	n;

    return (n = (long)(char)va_arg(*ap, int));
}
