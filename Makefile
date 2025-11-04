# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nico <nico@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/30 15:24:32 by nwirtzbi          #+#    #+#              #
#    Updated: 2025/11/03 18:09:09 by nico             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nome da biblioteca
NAME = libftprintf.a

#Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

#Lista de arquivos fonte
SRC = \
ft_printf.c \
utils.c \
numbers.c

#Arquivos objeto gerados a partir dos fonte
OBJ = $(SRC:.c=.o)

#Regra principal:
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

#Outras regras:
clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test

re: fclean all

test: all
	$(CC) $(CFLAGS) main_test.c $(NAME) -o test

.PHONY: all clean fclean re test