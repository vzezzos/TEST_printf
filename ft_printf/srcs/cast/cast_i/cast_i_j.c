#include "ft_printf.h"

long		cast_i_j(va_list *ap)
{
    long	n;

    return (n = (long)va_arg(*ap, intmax_t));
}
