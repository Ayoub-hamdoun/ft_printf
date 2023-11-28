# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 18:06:45 by ayhamdou          #+#    #+#              #
#    Updated: 2023/11/26 18:14:00 by ayhamdou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = ft_printf.c  ft_puthex.c  ft_putptr.c  ft_putunbr.c\
		ft_putchar.c ft_putnbr.c  ft_putstr.c 

OBJS = $(SRCS:%.c=%.o) 
all : $(NAME)
	echo "f"

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
