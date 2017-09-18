/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 08:27:56 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/13 10:23:11 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_lib.h"

void			test_memset(int test)
{
	char		str[50] = {0};
	char		str2[50] = {0};

	ft_memset(str + 1, '0', 10);
	memset(str2 + 1, '0', 10);
	ft_assert_memequal(str, str2, test, 50);

	ft_memset(str + 5, 'a', 20);
	memset(str2 + 5, 'a', 20);
	ft_assert_memequal(str, str2, test, 50);

	ft_memset(str + 3, 'b', 30);
	memset(str2 + 3, 'b', 30);
	ft_assert_memequal(str, str2, test, 50);
}

void			test_bzero(int test)
{
	char		str[50];
	char		str2[50];
	int			tab[30];
	int			tab2[30];

	ft_bzero(str, 50);
	bzero(str2, 50);
	ft_assert_memequal(str, str2, test, 50);
	ft_bzero(tab, 30);
	ft_bzero(tab2, 30);
	ft_assert_memequal(tab, tab2, test, 30);
}

void			test_memcpy(int test)
{
	int			tab[50];
	int			tab2[50] = {0};
	int			tab3[50] = {0};
	int			i = 0;

	while (i < 50)
	{
		tab[i] = i;
		i++;
	}
	ft_assert_memequal(ft_memcpy(tab2, tab, 20), memcpy(tab3, tab, 20), test, 50);
}

void			test_memccpy(int test)
{
	char		str[50] = {0};
	char		str2[50] = {0};

	memset(str, 'a', 49);
	memset(str2, 'a', 49);
	ft_memccpy(str + 1, "Toto dans le bateau", 'a', 10);
	memccpy(str2 + 1, "Toto dans le bateau", 'a', 10);
	ft_assert_memequal(str, str2, test, 50);

	memset(str, 'a', 49);
	memset(str2, 'a', 49);
	ft_memccpy(str + 1, "Toto dans le bateau", '\0', 20);
	memccpy(str2 + 1, "Toto dans le bateau", '\0', 20);
	ft_assert_memequal(str, str2, test, 50);

	memset(str, 'a', 49);
	memset(str2, 'a', 49);
	ft_memccpy(str + 1, "Toto dans le bateau", 'o', 30);
	memccpy(str2 + 1, "Toto dans le bateau", 'o', 30);
	ft_assert_memequal(str, str2, test, 50);
}

void			test_memcmp(int test)
{
	ft_assert_equal(ft_memcmp("abcde", "abcde", 5), memcmp("abcde", "abcde", 5), test);
	ft_assert_equal(ft_memcmp("abcde", "abcdf", 4), memcmp("abcde", "abcdf", 4), test);
	ft_assert_equal(ft_memcmp("ac", "ab", 1), memcmp("ac", "ab", 1), test);
	ft_assert_equal(ft_memcmp("ac", "ab", 2), memcmp("ac", "ab", 2), test);
	ft_assert_equal(ft_memcmp("a", "a", 1), memcmp("a", "a", 1), test);
}

void			test_memchr(int test)
{
	ft_assert_ptrequal(ft_memchr("abcde", 'e', 5), memchr("abcde", 'e', 5), test);
	ft_assert_ptrequal(ft_memchr("abcde", 'f', 5), memchr("abcde", 'f', 5), test);
	ft_assert_ptrequal(ft_memchr("ac", 'c', 2), memchr("ac", 'c', 2), test);
	ft_assert_ptrequal(ft_memchr("ac", ' ', 1), memchr("ac", ' ', 1), test);
}
