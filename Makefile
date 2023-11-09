# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anchikri <anchikri@42mulhouse.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 15:52:24 by anchikri          #+#    #+#              #
#    Updated: 2023/11/01 15:52:24 by anchikri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	src/ft_printf.c \
		src/ft_print_char.c \
		src/ft_print_hex.c \
		src/ft_print_nbr.c \
		src/ft_print_percent.c \
		src/ft_print_pointer.c \
		src/ft_print_string.c \
		src/ft_uitoa.c \
		src/ft_itoa_base.c

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

LIBFT_DIR = ./libft
LIBFT = ${LIBFT_DIR}/libft.a
NAME = libftprintf.a

all:	${NAME}

${NAME}:	${LIBFT} ${OBJS}
	cp ${LIBFT} ${NAME}
	${AR} ${NAME} ${OBJS}

${LIBFT}:
	make -C ${LIBFT_DIR}

clean:
	make -C ${LIBFT_DIR} clean
	${RM} ${OBJS}

fclean:	clean
	make -C  ${LIBFT_DIR} fclean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re libft