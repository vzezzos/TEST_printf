/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 10:42:44 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/14 13:29:39 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_lib.h"

t_test		g_tab[] =\
{\
	{"isdigit", &test_isdigit},\
	{"isalpha", &test_isalpha},\
	{"isalnum", &test_isalnum},\
	{"islower", &test_islower},\
	{"isupper", &test_isupper},\
	{"isneg", &test_isneg},\
	{"isblank", &test_isblank},\
	{"isspace", &test_isspace},\
	{"ismoperateur", &test_ismoperateur},\
	{"isprint", &test_isprint},\
	{"isascii", &test_isascii},\
	{"strlen", &test_strlen},\
	{"strchr", &test_strchr},\
	{"strrchr", &test_strrchr},\
	{"strcmp", &test_strcmp},\
	{"strncmp", &test_strncmp},\
	{"strdup", &test_strdup},\
	{"strcpy", &test_strcpy},\
	{"strncpy", &test_strncpy},\
	{"strcat", &test_strcat},\
	{"strncat", &test_strncat},\
	{"strlcat", &test_strlcat},\
	{"strstr", &test_strstr},\
	{"strnstr", &test_strnstr},\
	{"atoi", &test_atoi},\
	{"itoa", &test_itoa},\
	{"strtrim", &test_strtrim},\
	{"memset", &test_memset},\
	{"memcpy", &test_memcpy},\
	{"memccpy", &test_memccpy},\
	{"bzero", &test_bzero},\
	{"memcmp", &test_memcmp},\
	{"memchr", &test_memchr}\
};

int			main(int ac, char **av)
{
	int		nb;
	size_t	i;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		g_tab[nb].test(nb);
		printf("%sTest %-25s%s%s", AZUR_C, g_tab[nb].name, COLOR_RES, OK_MSG);
	}
	else
	{
		i = 0;
		while (i < SIZE_TAB(g_tab))
		{
			g_tab[i].test(i);
			printf("%sTest %-25s%s%s", AZUR_C, g_tab[i].name, COLOR_RES, OK_MSG);
			i++;
		}
	}
	return (0);
}
