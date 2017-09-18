# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vzezzos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/12 11:22:07 by vzezzos           #+#    #+#              #
#    Updated: 2017/04/14 10:59:14 by vzezzos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		test

SRC =		main.c\
			src/assert.c\
			src/test_is.c\
			src/test_str.c\
			src/test_put.c\
			src/test_mem.c

HEADER	=	includes

LIB		=	../libft.a

all : $(NAME)

$(NAME) :	$(LIB)
	@gcc -Wall -Wextra -Werror $(SRC) -o $(NAME) -I../ -L../ -lft -I.
	@./$(NAME)

clean :
	@make clean -C ../

fclean :
	@make fclean -C ../
	@rm -f $(NAME)

$(LIB) :
	@make -C ../

re : fclean all

