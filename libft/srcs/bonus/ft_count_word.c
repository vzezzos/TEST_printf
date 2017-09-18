/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 10:30:42 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 14:02:06 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_word(char const *str, char c)
{
	int		count;
	int		i;

	if (!str)
		return (0);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (!i && str[i] == c)
			count++;
		if (str[i] != c && str[i - 1] == c)
			count++;
		i++;
	}
	return (i);
}
