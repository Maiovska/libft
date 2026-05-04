# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaiovsk <hmaiovsk@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/04 15:52:11 by hmaiovsk          #+#    #+#              #
#    Updated: 2026/05/04 15:58:40 by hmaiovsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Wextra -Werror

SRCS := ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_memchr.c\
		ft_memcmp.c\

OBJS := $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

bonus: $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
