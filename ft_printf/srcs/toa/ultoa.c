#include "ft_printf.h"

static int		get_pow(unsigned long nb, int len, unsigned int len_b)
{
    unsigned long	tmp;

    tmp = nb;
    while (tmp > len_b - 1)
    {
	tmp = tmp / len_b;
	len++;
    }
    return (len);
}

char			*ultoa(uintmax_t n, char *base)
{
    char		*str;
    int			len;
    unsigned int	len_b;

    len = 1;
    len_b = ft_strlen(base);
    len = get_pow(n, len, len_b);
    if (!(str = ft_strnew(len)))
	return (NULL);
    while (len)
    {
	str[len - 1] = base[n % len_b];
	n /= len_b;
	len--;
    }
    return (str);
}
