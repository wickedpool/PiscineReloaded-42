# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 12:56:51 by thgiraud          #+#    #+#              #
#    Updated: 2016/11/04 13:52:41 by thgiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./ft_display_file.c

INC = ./lib.h

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
		$(RM)

fclean:
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
