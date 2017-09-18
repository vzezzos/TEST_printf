/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 13:43:23 by vzezzos           #+#    #+#             */
/*   Updated: 2017/04/19 17:28:07 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_lib.h"

void			test_strlen(int test)
{
	ft_assert_equal(ft_strlen("Toto"), strlen("Toto"), test);
	ft_assert_equal(ft_strlen(""), strlen(""), test);
	ft_assert_equal(ft_strlen("Le mots le plus long que l'on puisse avoir"), strlen("Le mots le plus long que l'on puisse avoir"), test);
}

void			test_strchr(int test)
{
	ft_assert_equal((int)ft_strchr("Toto", 'o'), (int)strchr("Toto", 'o'), test);
	ft_assert_equal((int)ft_strchr("abcd", 'f'), (int)strchr("abcd", 'f'), test);
	ft_assert_equal((int)ft_strchr("", '0'), (int)strchr("", '0'), test);
	ft_assert_equal((int)ft_strchr("abcd", 'b'), (int)strchr("abcd", 'b'), test);
}

void			test_strrchr(int test)
{
	ft_assert_equal((int)ft_strrchr("", '0'), (int)strrchr("", '0'), test);
	ft_assert_equal((int)ft_strrchr("Toto", 'o'), (int)strrchr("Toto", 'o'), test);
	ft_assert_equal((int)ft_strrchr("abcd", 'f'), (int)strrchr("abcd", 'f'), test);
	ft_assert_equal((int)ft_strrchr("aaaaaaaaaa", 'a'), (int)strrchr("aaaaaaaaaa", 'a'), test);
}

void			test_strdup(int test)
{
	ft_assert_memequal(ft_strdup("TOTO"), strdup("TOTO"), test, 5);
	ft_assert_memequal(ft_strdup("a"), strdup("a"), test, 2);
	ft_assert_memequal(ft_strdup(""), strdup(""), test, 1);
}

void			test_strcpy(int test)
{
	char		dest[50] = {0};
	char		dest2[50] = {0};
	
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strcpy(dest, "TOTO"), strcpy(dest2, "TOTO"), test, 50);
	ft_assert_memequal(ft_strcpy(dest, "a"), strcpy(dest2, "a"), test, 50);
	ft_assert_memequal(ft_strcpy(dest, ""), strcpy(dest2, ""), test, 1);
}

void			test_strncpy(int test)
{
	char		dest[50] = {0};
	char		dest2[50] = {0};
	
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strncpy(dest, "TOTO", 5), strncpy(dest2, "TOTO", 5), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strncpy(dest, "a", 2), strncpy(dest2, "a", 2), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strncpy(dest, "a", 1), strncpy(dest2, "a", 1), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strncpy(dest, "", 2), strncpy(dest2, "", 2), test, 50);
}

void			test_strcat(int test)
{
	char		dest[50] = {0};
	char		dest2[50] = {0};
	
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strcat(dest, "TOTO"), strcat(dest2, "TOTO"), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strcat(dest, "a"), strcat(dest2, "a"), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strcat(dest, "a"), strcat(dest2, "a"), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strcat(dest, ""), strcat(dest2, ""), test, 50);
}

void			test_strncat(int test)
{
	char		dest[50] = {0};
	char		dest2[50] = {0};
	
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strncat(dest, "TOTO", 5), strncat(dest2, "TOTO", 5), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strncat(dest, "a", 2), strncat(dest2, "a", 2), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strncat(dest, "a", 1), strncat(dest2, "a", 1), test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_memequal(ft_strncat(dest, "", 2), strncat(dest2, "", 2), test, 50);
}

void			test_strlcat(int test)
{
	char		src[] = "Toto dans le";
	char		dest[50] = {0};
	char		dest2[50] = {0};
/*	size_t		ret;

	printf("STRLCAT\n");
	memset(dest, 'a', 30);
	ret = strlcat(dest, src, 10);
	printf("Test avec <%s>, sur 10\nRET STRLCAT = %d, [%s]\n\n", src, (int)ret, dest);
	memset(dest, 'a', 30);
	ret = strlcat(dest, src, 1);
	printf("Test avec <%s>, sur 1\nRET STRLCAT = %d, [%s]\n\n", src, (int)ret, dest);
	memset(dest2, 'a', 10);
	ret = strlcat(dest2, src, 20);
	printf("Test avec <%s>, sur 20\nRET STRLCAT = %d, [%s]\n\n", src, (int)ret, dest2);
	(void)test;
*/	
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_equal(ft_strlcat(dest, src, 5), strlcat(dest2, src, 5), test);
	ft_assert_memequal(dest, dest2, test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_equal(ft_strlcat(dest, src, 2), strlcat(dest2, src, 2), test);
	ft_assert_memequal(dest, dest2, test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_equal(ft_strlcat(dest, src, 1), strlcat(dest2, src, 1), test);
	ft_assert_memequal(dest, dest2, test, 50);
	memset(dest, 'a', 30);
	memset(dest2, 'a', 30);
	ft_assert_equal(ft_strlcat(dest, src, 10), strlcat(dest2, src, 10), test);
	ft_assert_memequal(dest, dest2, test, 50);
}

void			test_strcmp(int test)
{
	ft_assert_equal(ft_strcmp("abcde", "abcde"), strcmp("abcde", "abcde"), test);
	ft_assert_equal(ft_strcmp("abcde", "abcdf"), strcmp("abcde", "abcdf"), test);
	ft_assert_equal(ft_strcmp("ac", "ab"), strcmp("ac", "ab"), test);
	ft_assert_equal(ft_strcmp("ac", "ab"), strcmp("ac", "ab"), test);
	ft_assert_equal(ft_strcmp("a", "a"), strcmp("a", "a"), test);
	ft_assert_equal(ft_strcmp("", ""), strcmp("", ""), test);
}

void			test_strncmp(int test)
{
	ft_assert_equal(ft_strncmp("abcde", "abcde", 5), strncmp("abcde", "abcde", 5), test);
	ft_assert_equal(ft_strncmp("abcde", "abcdf", 4), strncmp("abcde", "abcdf", 4), test);
	ft_assert_equal(ft_strncmp("ac", "ab", 1), strncmp("ac", "ab", 1), test);
	ft_assert_equal(ft_strncmp("ac", "ab", 2), strncmp("ac", "ab", 2), test);
	ft_assert_equal(ft_strncmp("a", "a", 1), strncmp("a", "a", 1), test);
	ft_assert_equal(ft_strncmp("", "", 10), strncmp("", "", 10), test);
}

void			test_strstr(int test)
{
	ft_assert_ptrequal(ft_strstr("abcde", "de"), strstr("abcde", "de"), test);
	ft_assert_ptrequal(ft_strstr("ac", "ab"), strstr("ac", "ab"), test);
	ft_assert_ptrequal(ft_strstr("AbAdAgAfAr", "Ar"), strstr("AbAdAgAfAr", "Ar"), test);
	ft_assert_ptrequal(ft_strstr("a", "a"), strstr("a", "a"), test);
	ft_assert_ptrequal(ft_strstr("a", ""), strstr("a", ""), test);
	ft_assert_ptrequal(ft_strstr("", "a"), strstr("", "a"), test);
}

void			test_strnstr(int test)
{
	ft_assert_ptrequal(ft_strnstr("abcde", "de", 5), strnstr("abcde", "de", 5), test);
	ft_assert_ptrequal(ft_strnstr("ac", "ab", 2), strnstr("ac", "ab", 2), test);
	ft_assert_ptrequal(ft_strnstr("AbAdAgAfAr", "Ar", 20), strnstr("AbAdAgAfAr", "Ar", 20), test);
	ft_assert_ptrequal(ft_strnstr("a", "a", 1), strnstr("a", "a", 1), test);
	ft_assert_ptrequal(ft_strnstr("a", "", 1), strnstr("a", "", 1), test);
	ft_assert_ptrequal(ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", strlen("MZIRIBMZE")), strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", strlen("MZIRIBMZE")), test);
	ft_assert_ptrequal(ft_strnstr("see FF your FF return FF no FF", "FF", strlen("see FF your FF return FF no FF")), strnstr("see FF your FF return FF no FF", "FF", strlen("see FF your FF return FF no FF")), test);
	ft_assert_ptrequal(ft_strnstr("a", "", 1), strnstr("a", "", 1), test);
	ft_assert_ptrequal(ft_strnstr("", "a", 1), strnstr("", "a", 1), test);
}

void			test_atoi(int test)
{
	ft_assert_equal(ft_atoi("123"), atoi("123"), test);
	ft_assert_equal(ft_atoi("-123"), atoi("-123"), test);
	ft_assert_equal(ft_atoi("\n123"), atoi("\n123"), test);
	ft_assert_equal(ft_atoi("   - a123"), atoi("   - a123"), test);
	ft_assert_equal(ft_atoi("  \t\t\t\t++6aaatoto"), atoi("  \t\t\t\t++6aaatoto"), test);
	ft_assert_equal(ft_atoi("2147483647"), atoi("2147483647"), test);
	ft_assert_equal(ft_atoi("-2147483648"), atoi("-2147483648"), test);
	ft_assert_equal(ft_atoi("99999999999999999999999999"), atoi("99999999999999999999999999"), test);
	ft_assert_equal(ft_atoi("-99999999999999999999999999"), atoi("-99999999999999999999999999"), test);
}

void			test_itoa(int test)
{
	ft_assert_memequal(ft_itoa(123), "123", test, 4);
	ft_assert_memequal(ft_itoa(-123), "-123", test, 5);
	ft_assert_memequal(ft_itoa(1), "1", test, 2);
	ft_assert_memequal(ft_itoa(-1), "-1",test,  3);
	ft_assert_memequal(ft_itoa(-2147483648), "-2147483648", test, 12);
	ft_assert_memequal(ft_itoa(0), "0", test, 2);
}


void			test_strtrim(int test)
{
	char		*str;

	str = "Hello    World   \t!";
	ft_assert_memequal(ft_strtrim("\t\t\n  \n\t Hello    World   \t!\n\n  \t"), str, test, ft_strlen(str));
	str = "";
	ft_assert_memequal(ft_strtrim("\t\t\n  \n\t \t!\n\n  \t"), str, test, ft_strlen(str));
	str = "a  \t \n ba ajsf   sdlf \b   \t\n\n  \t!";
	ft_assert_memequal(ft_strtrim("a  \t \n ba ajsf   sdlf \b   \t\n\n  \t!"), str, test, ft_strlen(str));
	str = "";
	ft_assert_memequal(ft_strtrim(""), str, test, ft_strlen(str));
}
