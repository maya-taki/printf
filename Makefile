# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 12:31:09 by mtakiyos          #+#    #+#              #
#    Updated: 2025/08/26 19:22:47 by mtakiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_functions.c ft_printf.c
FLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o)
RM = rm -f
$(NAME): $(OBJS)
	ar crs $@ $^

%.o:%.c ft_printf.h
	cc $(FLAGS) -c $^ -o $@

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all	fclean	clean	re
