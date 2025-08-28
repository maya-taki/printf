# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 12:31:09 by mtakiyos          #+#    #+#              #
#    Updated: 2025/08/28 16:11:07 by mtakiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printhex.c \
		ft_printuns.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_printptr.c \
		ft_printf.c 

FLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

RM = rm -f

END = \033[0m
RED = \033[31m
GREEN = \033[32m

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o:%.c
	@printf "$(GREEN)[Compiling]$(END) %s$(END)\n" "$(notdir $(<))"
	@cc $(FLAGS) -c $^ -o $@

all: $(NAME)

clean: 
	@printf "$(RED)[Removing files]$(END) %s$(END)\n" "$(notdir $(<))"
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all	fclean	clean	re
