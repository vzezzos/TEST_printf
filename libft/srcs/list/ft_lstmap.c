/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 14:46:22 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/17 09:10:02 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		tmp = f(lst);
		ft_lstadd(&new, tmp);
		lst = lst->next;
	}
	ft_lst_reverse(&new);
	return (new);
}
