/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 14:06:10 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 16:06:47 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	int		occ;

	i = 0;
	occ = 0;
	while (s[i])
	{
		if (s[i] == c)
			occ = i;
		i++;
	}
	if (!s[i] && c == '\0')
		return ((char *)s + i);
	if (!occ && s[0] == c)
		return ((char *)s);
	return (!occ ? NULL : (char *)s + occ);
}
