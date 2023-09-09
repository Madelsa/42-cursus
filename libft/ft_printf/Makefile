# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 12:01:23 by mabdelsa          #+#    #+#              #
#    Updated: 2023/09/09 13:28:34 by mabdelsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c print_char_string.c print_decimal.c print_hexa.c

NAME	= libftprintf.a
AR		= ar rs
RM		= rm -f
GCC		= cc
CFLAGS	= -Wall -Wextra -Werror

OBJS	= $(SRC:.c=.o)

all: $(NAME)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re