# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 15:09:24 by mabdelsa          #+#    #+#              #
#    Updated: 2023/09/09 15:58:09 by mabdelsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = get_next_line.c

NAME	= gnl.a
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