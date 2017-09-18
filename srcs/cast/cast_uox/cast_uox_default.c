#include "ft_printf.h"

uintmax_t		cast_uox_default(va_list *ap)
{
    return((uintmax_t)va_arg(*ap, unsigned int));
}
