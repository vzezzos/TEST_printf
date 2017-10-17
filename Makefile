# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/12 11:22:07 by vzezzos           #+#    #+#              #
#    Updated: 2017/10/13 16:35:59 by vzezzos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRC =		srcs/ft_realloc.c\
		srcs/fill_string.c\
		srcs/ft_printf.c\
		srcs/search/search_specifier.c\
		srcs/search/search_modif.c\
		srcs/toa/ultoa.c\
		srcs/toa/ltoa.c\
		srcs/ini_config.c\
		srcs/get_len_nb.c\
		srcs/set_str.c\
		srcs/handle_bytes.c\
		srcs/no_n_no_precision_xi.c\
		srcs/specifier/spec_c.c\
		srcs/specifier/spec_s.c\
		srcs/specifier/spec_p.c\
		srcs/specifier/spec_i.c\
		srcs/specifier/spec_d.c\
		srcs/specifier/spec_u.c\
		srcs/specifier/spec_o.c\
		srcs/specifier/spec_x.c\
		srcs/specifier/spec_lc.c\
		srcs/specifier/spec_ls.c\
		srcs/specifier/spec_ld.c\
		srcs/specifier/spec_lu.c\
		srcs/specifier/spec_lo.c\
		srcs/specifier/spec_lx.c\
		srcs/specifier/no_specifier.c\
		srcs/cast/cast_i/cast_i_l.c\
		srcs/cast/cast_i/cast_i_ll.c\
		srcs/cast/cast_i/cast_i_h.c\
		srcs/cast/cast_i/cast_i_hh.c\
		srcs/cast/cast_i/cast_i_j.c\
		srcs/cast/cast_i/cast_i_z.c\
		srcs/cast/cast_i/cast_i_default.c\
		srcs/cast/cast_uox/cast_uox_l.c\
		srcs/cast/cast_uox/cast_uox_ll.c\
		srcs/cast/cast_uox/cast_uox_h.c\
		srcs/cast/cast_uox/cast_uox_hh.c\
		srcs/cast/cast_uox/cast_uox_j.c\
		srcs/cast/cast_uox/cast_uox_z.c\
		srcs/cast/cast_uox/cast_uox_default.c\
		srcs/modif/converteur/conv_short.c\
		srcs/modif/converteur/conv_long.c\
		srcs/modif/converteur/conv_intmax_t.c\
		srcs/modif/converteur/conv_size_t.c\
		srcs/modif/flags/flag_diese.c\
		srcs/modif/flags/flag_minus.c\
		srcs/modif/flags/flag_plus.c\
		srcs/modif/flags/flag_space.c\
		srcs/modif/flags/flag_zero.c\
		srcs/modif/flags/flag_width.c\
		srcs/modif/flags/flag_star.c\
		srcs/modif/flags/flag_precision.c\
		libft/srcs/is/ft_isdigit.c\
		libft/srcs/is/ft_isspace.c\
		libft/srcs/mem/ft_bzero.c\
		libft/srcs/mem/ft_memset.c\
		libft/srcs/mem/ft_memcpy.c\
		libft/srcs/mem/ft_memalloc.c\
		libft/srcs/str/ft_strlen.c\
		libft/srcs/str/ft_strjoin.c\
		libft/srcs/str/ft_strcat.c\
		libft/srcs/str/ft_strcpy.c\
		libft/srcs/str/ft_strnew.c\
		libft/srcs/str/ft_atoi.c\
		libft/srcs/str/ft_itoa.c\
		libft/srcs/put/ft_putchar.c\
		libft/srcs/put/ft_putchar_fd.c\
		libft/srcs/put/ft_putstr.c\
		libft/srcs/put/ft_putstr_fd.c\
		libft/srcs/put/ft_putnbr.c\
		libft/srcs/put/ft_putnbr_fd.c\
		libft/srcs/put/ft_putendl.c\
		libft/srcs/put/ft_putendl_fd.c
#            libft/srcs/ft_count_word.c\
    libft/srcs/ft_strichr.c\
    libft/srcs/ft_striteri.c\
    libft/srcs/strlcat.c\
    libft/srcs/ft_lstadd_back.c\

OBJ =		$(SRC:.c=.o)

HEADER =	includes

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)
	mkdir -p obj
	mv $^ obj/

%.o : %.c
	gcc -Wall -Werror -Wextra -c $< -o $@ -I $(HEADER)

clean :
	rm -Rf obj/

fclean : clean
	rm -f $(NAME)

re : fclean all

