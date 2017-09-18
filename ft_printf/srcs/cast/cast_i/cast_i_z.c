#include "ft_printf.h"

long		cast_i_z(va_list *ap)
{
    return ((long)va_arg(*ap, ssize_t));
}
