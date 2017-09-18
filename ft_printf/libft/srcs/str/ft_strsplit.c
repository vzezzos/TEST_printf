/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 10:13:18 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 14:07:01 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len_w;

	if (!(tab = (char **)ft_memalloc(sizeof(char *) \
					* (ft_count_word(s, c) + 1))))
		return (NULL);
	i = 0;
	while (s && *s)
	{
		if (*s == c)
			s++;
		else
		{
			len_w = ft_lenword(s, c);
			if (!(tab[i] = ft_strnew(len_w)))
				return (NULL);
			ft_strncpy(tab[i], s, len_w);
			i++;
			s += len_w;
		}
	}
	tab[i] = NULL;
	return (tab);
}
