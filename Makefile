# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataji <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 21:23:29 by ataji             #+#    #+#              #
#    Updated: 2021/12/13 18:49:34 by ataji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INC = ft_printf.h
SRCS =		ft_printf.c\
		ft_printchar.c\
		ft_printnbr.c\
		ft_printstr.c\
		ft_printnbru.c\
		ft_printhexa.c\
		ft_printptr.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = @ar -rsc
CC = gcc

all:$(NAME)

$(NAME):$(OBJS) $(INC)
	$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:clean
	@$(RM) $(NAME)

re: fclean all
