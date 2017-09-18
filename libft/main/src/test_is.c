/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 10:50:49 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/13 13:56:01 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_lib.h"

void			test_isdigit(int test)
{
	ft_assert_equal(ft_isdigit('1'), isdigit('1'), test);
	ft_assert_equal(ft_isdigit('0'), isdigit('0'), test);
	ft_assert_equal(ft_isdigit('a'), isdigit('a'), test);
	ft_assert_equal(ft_isdigit('\n'), isdigit('\n'), test);
}

void			test_isalpha(int test)
{
	ft_assert_equal(ft_isalpha('1'), isalpha('1'), test);
	ft_assert_equal(ft_isalpha('0'), isalpha('0'), test);
	ft_assert_equal(ft_isalpha('a'), isalpha('a'), test);
	ft_assert_equal(ft_isalpha('\n'), isalpha('\n'), test);
}

void			test_isalnum(int test)
{
	ft_assert_equal(ft_isalnum('1'), isalnum('1'), test);
	ft_assert_equal(ft_isalnum('A'), isalnum('A'), test);
	ft_assert_equal(ft_isalnum('a'), isalnum('a'), test);
	ft_assert_equal(ft_isalnum('\n'), isalnum('\n'), test);
}

void			test_islower(int test)
{
	ft_assert_equal(ft_islower('1'), islower('1'), test);
	ft_assert_equal(ft_islower('D'), islower('D'), test);
	ft_assert_equal(ft_islower('a'), islower('a'), test);
	ft_assert_equal(ft_islower('\n'), islower('\n'), test);
}

void			test_isupper(int test)
{
	ft_assert_equal(ft_isupper('1'), isupper('1'), test);
	ft_assert_equal(ft_isupper('D'), isupper('D'), test);
	ft_assert_equal(ft_isupper('a'), isupper('a'), test);
	ft_assert_equal(ft_isupper('\n'), isupper('\n'), test);
}

void			test_isneg(int test)
{
	ft_assert_equal(ft_isneg(1), 0, test);
	ft_assert_equal(ft_isneg(0), 0, test);
	ft_assert_equal(ft_isneg('a'), 0, test);
	ft_assert_equal(ft_isneg('\n'), 0, test);
	ft_assert_equal(ft_isneg(-12), 1, test);
	ft_assert_equal(ft_isneg(INT_MIN), 1, test);
	ft_assert_equal(ft_isneg(-1000), 1, test);
}

void			test_isblank(int test)
{
	ft_assert_equal(ft_isblank('1'), isblank('1'), test);
	ft_assert_equal(ft_isblank(' '), isblank(' '), test);
	ft_assert_equal(ft_isblank('\t'), isblank('\t'), test);
	ft_assert_equal(ft_isblank('\n'), isblank('\n'), test);
	ft_assert_equal(ft_isblank('\r'), isblank('\r'), test);
}

void			test_isspace(int test)
{
	ft_assert_equal(ft_isspace('1'), isspace('1'), test);
	ft_assert_equal(ft_isspace(' '), isspace(' '), test);
	ft_assert_equal(ft_isspace('\t'), isspace('\t'), test);
	ft_assert_equal(ft_isspace('\n'), isspace('\n'), test);
	ft_assert_equal(ft_isspace('\r'), isspace('\r'), test);
}

void			test_ismoperateur(int test)
{
	ft_assert_equal(ft_ismoperateur('1'), 0, test);
	ft_assert_equal(ft_ismoperateur('+'), 1, test);
	ft_assert_equal(ft_ismoperateur('('), 1, test);
	ft_assert_equal(ft_ismoperateur('^'), 1, test);
	ft_assert_equal(ft_ismoperateur('}'), 0, test);
}

void			test_isprint(int test)
{
	ft_assert_equal(ft_isprint(32), isprint(32), test);
	ft_assert_equal(ft_isprint(31), isprint(31), test);
	ft_assert_equal(ft_isprint(0), isprint(0), test);
	ft_assert_equal(ft_isprint(127), isprint(127), test);
	ft_assert_equal(ft_isprint(65), isprint(65), test);
}

void			test_isascii(int test)
{
	ft_assert_equal(ft_isascii(-10), isascii(-10), test);
	ft_assert_equal(ft_isascii(10), isascii(10), test);
	ft_assert_equal(ft_isascii(130), isascii(130), test);
}

void			test_tolower(int test)
{
	ft_assert_equal(ft_tolower('A'), tolower('A'), test);
	ft_assert_equal(ft_tolower('\n'), tolower('\n'), test);
	ft_assert_equal(ft_tolower('a'), tolower('a'), test);
}

void			test_toupper(int test)
{
	ft_assert_equal(ft_toupper('A'), toupper('A'), test);
	ft_assert_equal(ft_toupper('\n'), toupper('\n'), test);
	ft_assert_equal(ft_toupper('a'), toupper('a'), test);
}
