/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <vzezzos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 21:35:26 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/12 13:32:31 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int         ft_isspace(int c)
{
    return (!((c < '\t' || c > '\r') && c != ' '));
}
