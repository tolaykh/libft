# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkhamis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 13:08:02 by tkhamis           #+#    #+#              #
#    Updated: 2025/08/04 17:02:22 by tkhamis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft 
FLAGS = -Wall -Werror -Wextra
SRC = ft_isalnum.c 
OBJ = $(SRC :.c = .o)

all:
	cc $(FLAGS) $(SRC) -o $(NAME)

fclean: clean
	rm -f
clean :
	rm -f test.c
