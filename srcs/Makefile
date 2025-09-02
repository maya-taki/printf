# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/22 13:33:20 by mtakiyos          #+#    #+#              #
#    Updated: 2025/09/02 15:15:44 by mtakiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wextra -Werror -Wall
SRCS	=	ft_printhex.c \
			ft_printptr.c \
			ft_printuns.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
				
OBJS =	$(SRCS:.c=.o)
	
all:	$(NAME)

${NAME}: ${OBJS}
	ar crs $@ $^

%.o:%.c
	cc ${CFLAGS} -c $^ -o $@

clean:	
	rm -f $(OBJS)

fclean:	clean
	rm -f ${NAME}

re:	fclean all