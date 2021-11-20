# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 09:33:09 by obouadel          #+#    #+#              #
#    Updated: 2021/11/20 14:53:08 by obouadel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=includes
SRCS= srcs/ft_printf_utils.c srcs/ft_printf.c srcs/ft_utoa.c srcs/ft_printhex.c\
	srcs/ft_printaddr.c srcs/ft_itoa.c srcs/ft_strdup.c srcs/ft_strlen.c\
	srcs/ft_calloc.c srcs/ft_bzero.c
OBJS=$(SRCS:.c=.o)
NAME= libftprintf.a


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

%.o: %.c $(INCLUDES)/ft_printf.h
	$(CC) -I $(INCLUDES) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean