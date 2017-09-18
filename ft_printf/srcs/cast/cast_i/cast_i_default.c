#include "ft_printf.h"

long		cast_i_default(va_list *ap)
{
    long	n;

    return (n = (long)va_arg(*ap, int));
}
