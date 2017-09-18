#include "ft_printf.h"

uintmax_t		cast_uox_hh(va_list *ap)
{
    return ((uintmax_t)(unsigned char)va_arg(*ap, unsigned int));
}
