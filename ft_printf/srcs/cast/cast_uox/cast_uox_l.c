#include "ft_printf.h"

uintmax_t		cast_uox_l(va_list *ap)
{
    uintmax_t	n;

    return (n = va_arg(*ap, uintmax_t));
}
