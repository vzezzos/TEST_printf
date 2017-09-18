/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 10:59:27 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 13:29:14 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIB_H
# define TEST_LIB_H
# define KO_MSG "\033[31;1mKO !\033[0m\n"
# define OK_MSG "\033[32;1mOK !\033[0m\n"
# define AZUR_C "\033[38;2;240;255;255;1m"
# define COLOR_RES "\033[0m"
# define SIZE_TAB(X) (sizeof(X) / sizeof(*X))
# include "libft.h"
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <ctype.h>

typedef struct	s_test
{
	char		*name;
	void		(*test) (int);
}				t_test;

void			test_isdigit(int test);
void			test_isalpha(int test);
void			test_isalnum(int test);
void			test_islower(int test);
void			test_isupper(int test);
void			test_isneg(int test);
void			test_isblank(int test);
void			test_isspace(int test);
void			test_ismoperateur(int test);
void			test_isprint(int test);
void			test_isascii(int test);
void			test_tolower(int test);
void			test_toupper(int test);

void			test_strlen(int test);
void			test_strchr(int test);
void			test_strrchr(int test);
void			test_strdup(int test);
void			test_strcpy(int test);
void			test_strncpy(int test);
void			test_strcat(int test);
void			test_strncat(int test);
void			test_strlcat(int test);
void			test_strcmp(int test);
void			test_strncmp(int test);
void			test_strstr(int test);
void			test_strnstr(int test);
void			test_strtrim(int test);

void			test_atoi(int test);
void			test_itoa(int test);

void			test_bzero(int test);
void			test_memset(int test);
void			test_memcpy(int test);
void			test_memccpy(int test);
void			test_memcmp(int test);
void			test_memchr(int test);

void			ft_assert_equal(int a, int b, int ac);
void			ft_assert_memequal(void *s1, void *s2, int ac, int size);
void			ft_assert_ptrequal(void *s1, void *s2, int ac);

#endif
