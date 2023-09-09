# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 13:08:57 by mabdelsa          #+#    #+#              #
#    Updated: 2023/09/09 16:06:59 by mabdelsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
      ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
      ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
      ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
      ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
      ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
      ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

PRINTF_P = ./ft_printf/
PRINTF_AR = ./ft_printf/libftprintf.a

GNL_P = ./get_next_line/
GNL_AR = ./get_next_line/gnl.a

NAME	      = libft.a
AR		= ar rs
RM		= rm -f
GCC		= cc
CFLAGS	= -Wall -Wextra -Werror

OBJS		= $(SRC:.c=.o)

all: $(NAME)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(PRINTF_AR) $(GNL_AR)
	$(AR) $(NAME) $(OBJS) $(PRINTF_AR) $(GNL_AR)

$(PRINTF_AR):
	make -C $(PRINTF_P)

$(GNL_AR):
	make -C $(GNL_P)

clean:
	make -C $(PRINTF_P) fclean
	make -C $(GNL_P) fclean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re