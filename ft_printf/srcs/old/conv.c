/*#include "ft_printf.h"

int			spec_c(t_info *tab, va_list *ap, t_config *config)
{
    char		c;

    c = (char)va_arg(*ap, int);
    if (fill_string(tab, 1, &c))
	return (-1);
    return (0);
    (void)config;
}

int			spec_s(t_info *tab, va_list *ap, t_config *config)
{
    char		*str;
    int			len;

    str = (char *)va_arg(*ap, void *);
    len = ft_strlen(str);
    if (fill_string(tab, len, str))
	return (-1);
    return (0);
    (void)config;
}

int			spec_p(t_info *tab, va_list *ap, t_config *config)
{
    unsigned long	n;
    char		*str;
    int			len;
    int			ret;
    TO DO ---> cas particulier (nil) pour pointeur NULL 
     * egalement a voir pour %s			
    if (fill_string(tab, 2, "0x"))
	return (-1);
    n = (unsigned long)(uintptr_t)va_arg(*ap, void *);
    if (!(str = ultoa(n, "0123456789abcdef")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
    (void)config;
}

int			spec_x(t_info *tab, va_list *ap, t_config *config)
{
    unsigned int	n;
    char		*str;
    int			len;
    int			ret;

    if (config->diese == 1)
    {
	if (fill_string(tab, 2, "0x"))
	    return (-1);
    }
    n = va_arg(*ap, unsigned int);
    if (!(str = ultoa(n, "0123456789abcdef")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
}

int			spec_o(t_info *tab, va_list *ap, t_config *config)
{
    unsigned int	n;
    char		*str;
    int			len;
    int			ret;

    if (config->diese == 1)
    {
	if (fill_string(tab, 1, "0"))
	    return (-1);
    }
    n = va_arg(*ap, unsigned int);
    if (!(str = ultoa(n, "01234567")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
}

int			spec_u(t_info *tab, va_list *ap, t_config *config)
{
    unsigned int	n;
    char		*str;
    int			len;
    int			ret;

    if (config->l == 1)
    {
	conv_ulong(tab, ap);
    }
    n = va_arg(*ap, unsigned int);
    if (!(str = ultoa(n, "0123456789")))
	return (-1);
    len = ft_strlen(str);
    ret = fill_string(tab, len, str);
    free(str);
    return (ret);
    (void)config;
}*/
