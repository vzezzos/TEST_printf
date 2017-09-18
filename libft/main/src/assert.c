/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 11:16:01 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 10:11:49 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_lib.h"

extern t_test	g_tab[];

void		ft_assert_equal(int a, int b, int ac)
{
	if (a != b)
	{
		printf("%sTest %-25s%s%s", AZUR_C, g_tab[ac].name, COLOR_RES, KO_MSG);
		exit(1);
	}
	return ;
}

void		ft_assert_memequal(void *s1, void *s2, int ac, int size)
{
	if (memcmp(s1, s2, size))
	{
		printf("%sTest %-25s%s%s", AZUR_C, g_tab[ac].name, COLOR_RES, KO_MSG);
		exit(1);
	}
	return ;
}

void		ft_assert_ptrequal(void *s1, void *s2, int ac)
{
	if (s1 != s2)
	{
		printf("%sTest %-25s%s%s", AZUR_C, g_tab[ac].name, COLOR_RES, KO_MSG);
		exit(1);
	}
	return ;
}
