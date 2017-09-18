#include "ft_printf.h"

uintmax_t		cast_uox_z(va_list *ap)
{
    return ((uintmax_t)(size_t)va_arg(*ap, unsigned long));
}
