# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 18:12:49 by thgiraud          #+#    #+#              #
#    Updated: 2016/11/04 19:27:42 by thgiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = ar rc

G = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a


SRC =	./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c

OBJ =	./ft_putchar.o \
		./ft_putstr.o \
		./ft_strcmp.o \
		./ft_strlen.o \
		./ft_swap.o

INC = ./includes/

all: $(NAME)

$(NAME):
		$(G) $(CFLAGS) -c $(SRC) -I $(INC)
		$(CC) $(NAME) $(OBJ)
		ranlib $(NAME)


clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
