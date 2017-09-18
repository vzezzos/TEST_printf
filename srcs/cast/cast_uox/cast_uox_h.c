#include "ft_printf.h"

uintmax_t		cast_uox_h(va_list *ap)
{
    return ((uintmax_t)(unsigned short)va_arg(*ap, unsigned int));
}
