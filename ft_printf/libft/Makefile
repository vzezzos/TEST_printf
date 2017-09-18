# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/12 11:22:07 by vzezzos           #+#    #+#              #
#    Updated: 2017/04/17 15:34:02 by vzezzos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRC =		srcs/is/ft_isalnum.c\
            srcs/is/ft_isalpha.c\
            srcs/is/ft_isascii.c\
            srcs/is/ft_isdigit.c\
            srcs/is/ft_isprint.c\
            srcs/is/ft_tolower.c\
            srcs/is/ft_toupper.c\
            srcs/mem/ft_bzero.c\
            srcs/mem/ft_memset.c\
            srcs/mem/ft_memcpy.c\
            srcs/mem/ft_memccpy.c\
            srcs/mem/ft_memcmp.c\
            srcs/mem/ft_memmove.c\
            srcs/mem/ft_memchr.c\
			srcs/mem/ft_memalloc.c\
            srcs/mem/ft_memdel.c\
			srcs/str/ft_strlen.c\
            srcs/str/ft_strcmp.c\
            srcs/str/ft_strncmp.c\
            srcs/str/ft_strchr.c\
            srcs/str/ft_strrchr.c\
            srcs/str/ft_strcat.c\
            srcs/str/ft_strncat.c\
            srcs/str/ft_strlcat.c\
            srcs/str/ft_strcpy.c\
            srcs/str/ft_strncpy.c\
            srcs/str/ft_strstr.c\
            srcs/str/ft_strnstr.c\
            srcs/str/ft_strdup.c\
            srcs/str/ft_strnew.c\
            srcs/str/ft_strclr.c\
            srcs/str/ft_atoi.c\
            srcs/str/ft_itoa.c\
            srcs/str/ft_strdel.c\
            srcs/str/ft_striter.c\
            srcs/str/ft_striteri.c\
            srcs/str/ft_strmap.c\
            srcs/str/ft_strmapi.c\
            srcs/str/ft_strequ.c\
            srcs/str/ft_strnequ.c\
            srcs/str/ft_strjoin.c\
            srcs/str/ft_strtrim.c\
            srcs/str/ft_strsub.c\
            srcs/str/ft_strsplit.c\
            srcs/put/ft_putchar.c\
            srcs/put/ft_putstr.c\
            srcs/put/ft_putnbr.c\
            srcs/put/ft_putendl.c\
            srcs/put/ft_putchar_fd.c\
            srcs/put/ft_putstr_fd.c\
            srcs/put/ft_putnbr_fd.c\
            srcs/put/ft_putendl_fd.c\
            srcs/list/ft_lstnew.c\
            srcs/list/ft_lstdelone.c\
            srcs/list/ft_lstdel.c\
            srcs/list/ft_lstadd.c\
            srcs/list/ft_lstiter.c\
            srcs/list/ft_lstmap.c\
            srcs/list/ft_lst_reverse.c\
            srcs/bonus/ft_lenword.c\
            srcs/bonus/ft_count_word.c\
            srcs/bonus/ft_isblank.c\
            srcs/bonus/ft_isneg.c\
            srcs/bonus/ft_istrim.c\
            srcs/bonus/ft_ismoperateur.c\
            srcs/bonus/ft_islower.c\
            srcs/bonus/ft_isspace.c\
            srcs/bonus/ft_isupper.c
#            srcs/ft_count_word.c\
            srcs/ft_strichr.c\
            srcs/ft_striteri.c\
            srcs/strlcat.c\
            srcs/ft_lstadd_back.c\

OBJ =		$(SRC:.c=.o)

HEADER =	includes

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o : %.c
	gcc -Wall -Werror -Wextra -c $< -o $@ -I .

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

