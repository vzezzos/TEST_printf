/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 14:08:30 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/17 09:40:07 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;
	void	*cpy;

	if (!(elem = (t_list *)ft_memalloc(sizeof(t_list) * 1)))
		return (NULL);
	if (!content)
	{
		elem->content = NULL;
		elem->content_size = 0;
		elem->next = NULL;
		return (elem);
	}
	if (!(cpy = ft_memalloc(content_size)))
		return (NULL);
	cpy = ft_memcpy(cpy, content, content_size);
	elem->content = cpy;
	elem->content_size = content_size;
	elem->next = NULL;
	return (elem);
}
