/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 14:20:18 by vzezzos           #+#    #+#             */
/*   Updated: 2017/10/13 16:39:55 by vzezzos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdint.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <wchar.h>

typedef struct		s_info
{
	char			*str;
	long			index;
	size_t			buf;
	int			size_wc;
}					t_info;

typedef struct		s_config
{
	va_list			*ap;
	char			*str_flag;
	char			*charset;
	char			*charset_pref;
	int				ret;
	size_t			buf;
	char			diese;
	char			padding;
	int				width;
	int				precision;
	char			minus;
	char			plus;
	char			space;
	char			star;
	int				hljz;
}					t_config;

typedef struct		s_attrib
{
	char			attrib;
	int				(*f_attrib)(t_config *, const char *);
}					t_attrib;

typedef struct		s_func
{
	char			specifier;
	int				(*f_spec)(t_info *, t_config *);
}					t_func;

typedef intmax_t	(*t_i_hljz)(va_list *);
typedef uintmax_t	(*t_uox_hljz)(va_list *);
typedef int		(*t_f_wctomc)(t_info*, unsigned int);

int					ft_printf(const char *format, ...);
int					spec_c(t_info *tab, t_config *config);
int					spec_i(t_info *tab, t_config *config);
int					spec_d(t_info *tab, t_config *config);
int					spec_s(t_info *tab, t_config *config);
int					spec_p(t_info *tab, t_config *config);
int					spec_x(t_info *tab, t_config *config);
int					spec_o(t_info *tab, t_config *config);
int					spec_u(t_info *tab, t_config *config);
int					spec_ls(t_info *tab, t_config *config);
int					spec_lc(t_info *tab, t_config *config);
int					spec_lx(t_info *tab, t_config *config);
int					spec_ld(t_info *tab, t_config *config);
int					spec_lu(t_info *tab, t_config *config);
int					spec_lo(t_info *tab, t_config *config);
int					f_long(t_config *config, const char *format);
int					f_short(t_config *config, const char *format);
int					f_intmax_t(t_config *config, const char *format);
int					f_size_t(t_config *config, const char *format);
int					f_diese(t_config *config, const char *format);
int					f_precision(t_config *config, const char *format);
int					f_minus(t_config *config, const char *format);
int					f_plus(t_config *config, const char *format);
int					f_space(t_config *config, const char *format);
int					f_star(t_config *config, const char *format);
int					f_zero(t_config *config, const char *format);
int					f_width(t_config *config, const char *format);
intmax_t			cast_i_default(va_list *ap);
intmax_t			cast_i_h(va_list *ap);
intmax_t			cast_i_hh(va_list *ap);
intmax_t			cast_i_l(va_list *ap);
intmax_t			cast_i_ll(va_list *ap);
intmax_t			cast_i_j(va_list *ap);
intmax_t			cast_i_z(va_list *ap);
uintmax_t			cast_uox_default(va_list *ap);
uintmax_t			cast_uox_h(va_list *ap);
uintmax_t			cast_uox_hh(va_list *ap);
uintmax_t			cast_uox_l(va_list *ap);
uintmax_t			cast_uox_ll(va_list *ap);
uintmax_t			cast_uox_j(va_list *ap);
uintmax_t			cast_uox_z(va_list *ap);
int				handle_default(t_info *tab, unsigned int n);
int				handle_one_byte(t_info *tab, unsigned int n);
int				handle_two_byte(t_info *tab, unsigned int n);
int				handle_three_byte(t_info *tab, unsigned int n);
int				handle_four_byte(t_info *tab, unsigned int n);
int					no_specifier(t_info *tab, t_config *config, char c);

int				lenwc(unsigned int n);
void				ini_config(t_config *config);
void				ini_t_info(t_info *tab);
int					search_specifier(const char *format, t_info *tab,\
					t_config *config);
int					search_modif(const char **format, t_info *tab, va_list *ap);
void				*ft_realloc(void *str, size_t size_d, size_t buff);
int					fill_string(t_info *tab, size_t size, const char *src);
char				*ultoa(uintmax_t n, char *base);
char				*ltoa(intmax_t n);
int					get_len_nb(intmax_t nb);
int					set_str(t_info *tab, t_info *set_flag, \
					t_config *config, char **str);
int					no_n_no_precision_xi(t_info *tab, t_config *config);
#endif
