/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 08:22:52 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 10:04:16 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_lentrim(char const *str)
{
	int		len;
	int		start;

	len = ft_strlen(str);
	start = 0;
	while (str[start] && ft_istrim(str[start]))
		start++;
	if (start == len)
		return (0);
	while (len > 0 && ft_istrim(str[len - 1]))
		len--;
	return (len - start);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		len;

	if (!s)
		return (NULL);
	len = ft_lentrim(s);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (*s && ft_istrim(*s))
		s++;
	return (ft_strncpy(str, s, len));
}
