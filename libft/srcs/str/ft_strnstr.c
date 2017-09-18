/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 12:29:00 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/13 13:10:23 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	size;

	if (!*needle)
		return ((char *)haystack);
	size = ft_strlen(needle);
	i = 0;
	while (haystack[i] && (i + size) <= len)
	{
		if (haystack[i] == needle[0])
		{
			if (!(ft_strncmp(haystack + i, needle, size)))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
