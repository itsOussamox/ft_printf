# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 09:33:09 by obouadel          #+#    #+#              #
#    Updated: 2021/11/19 20:57:33 by obouadel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=includes
SRCS= srcs/ft_printf_utils.c srcs/ft_printf.c srcs/ft_utoa.c srcs/ft_printhex.c\
	srcs/ft_printaddr.c\
		srcs/libft/ft_isdigit.c\
	 	srcs/libft/ft_memset.c\
	 	srcs/libft/ft_strjoin.c\
	 	srcs/libft/ft_isprint.c\
		srcs/libft/ft_putchar_fd.c\
	 	srcs/libft/ft_strlcat.c\
	 	srcs/libft/ft_substr.c\
	 	srcs/libft/ft_atoi.c\
	 	srcs/libft/ft_itoa.c\
	 	srcs/libft/ft_putendl_fd.c\
		srcs/libft/ft_strlcpy.c\
	 	srcs/libft/ft_tolower.c\
	 	srcs/libft/ft_bzero.c\
	 	srcs/libft/ft_putnbr_fd.c\
	 	srcs/libft/ft_strlen.c\
		srcs/libft/ft_toupper.c\
	 	srcs/libft/ft_calloc.c\
	 	srcs/libft/ft_memchr.c\
	 	srcs/libft/ft_putstr_fd.c\
	 	srcs/libft/ft_strmapi.c\
	 	srcs/libft/ft_isalnum.c\
		srcs/libft/ft_memcmp.c\
	 	srcs/libft/ft_strncmp.c\
	 	srcs/libft/ft_isalpha.c\
	 	srcs/libft/ft_memcpy.c\
	 	srcs/libft/ft_strchr.c\
		srcs/libft/ft_strnstr.c\
	 	srcs/libft/ft_isascii.c\
	 	srcs/libft/ft_memmove.c\
	 	srcs/libft/ft_strdup.c\
	 	srcs/libft/ft_strrchr.c\
		srcs/libft/ft_strtrim.c\
	 	srcs/libft/ft_striteri.c\
	 	srcs/libft/ft_split.c\

OBJS=$(SRCS:.c=.o)
NAME= libftprintf.a


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

%.o: %.c 
	$(CC) -I $(INCLUDES) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean