/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 08:10:41 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 08:37:30 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*ft_fillstr(char *str, char const *s1, char const *s2)
{
	int			i;

	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (ft_strcat(str, s2));
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		if (!(str = ft_strnew(ft_strlen(s2))))
			return (NULL);
		return (ft_strcpy(str, s2));
	}
	if (!s2)
	{
		if (!(str = ft_strnew(ft_strlen(s1))))
			return (NULL);
		return (ft_strcpy(str, s1));
	}
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	return (ft_fillstr(str, s1, s2));
}
