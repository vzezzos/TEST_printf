/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 10:55:18 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/13 11:06:58 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			if (!(ft_strncmp(haystack, needle, ft_strlen(needle))))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
