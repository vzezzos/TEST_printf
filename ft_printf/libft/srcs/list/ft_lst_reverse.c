/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 11:28:37 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/17 09:09:29 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lst_reverse(t_list **begin_list)
{
	t_list		*next;
	t_list		*previous;
	t_list		*cpy;

	if (!begin_list)
		return ;
	cpy = *begin_list;
	previous = NULL;
	while (cpy)
	{
		next = cpy->next;
		cpy->next = previous;
		previous = cpy;
		cpy = next;
	}
	*begin_list = previous;
}
