# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/27 14:42:17 by hmaiovsk          #+#    #+#              #
#    Updated: 2026/04/30 14:12:34 by hmaiovsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CC				= cc
CFLAGS			= -Wall -Wextra -Werror
AR				= ar
ARFLAGS			= -rcs
SRCS			= ft_isalpha.c /
			  ft_isdigit.c /
			  ft_isalnum.c /
			  ft_isascii.c /
			  ft_isprint.c /
				ft_strlen.c /
			  ft_memset.c /
			  ft_ft_bzero.c/
			  ft_memcpy.c/
			  ft_memmove.c/
			  ft_toupper.c/
			  ft_tolower.c/
			  ft_strchr.c/
			  ft_strrchr.c/
			  ft_strncmp.c/
all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJS) = %.o : %.c
	$(CC) $(CFLAGS)  -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
