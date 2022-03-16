# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nansonm <ansonmng@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 17:47:13 by nansonm           #+#    #+#              #
#    Updated: 2022/03/16 16:45:29 by nansonm          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS	= 	ft_printf.c \
			ft_printptr.c \
			ft_print_hex.c \
			ft_printf_utils.c \
			ft_print_unsigned.c \
			ft_itoa.c \

OBJS	= ${SCRS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I.

NAME	= libftprintf.a

all: ${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean: 
	rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re