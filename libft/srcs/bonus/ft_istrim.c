/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 08:30:23 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 08:32:02 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_istrim(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}