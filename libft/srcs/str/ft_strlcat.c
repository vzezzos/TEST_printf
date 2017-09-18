/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:08:43 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/17 09:35:17 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (len_d + 1 >= size)
		return (size + len_s);
	if ((len_d + len_s) >= size)
	{
		ft_strncat(dest, src, size - (len_d + 1));
		return (len_s + len_d);
	}
	ft_strncat(dest, src, size - 1);
	return (len_d + len_s);
}
