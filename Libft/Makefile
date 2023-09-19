# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 12:08:42 by emartin2          #+#    #+#              #
#    Updated: 2023/09/18 18:25:45 by emartin2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
CFLAGS =	-Wall -Wextra -Werror
SOURCES = ft_isalpha.c ft_isdigit.c ft_memchr.c ft_strchr.c ft_strncmp.c \
	ft_strrchr.c ft_toupper.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memcmp.c ft_strcmp.c ft_strnstr.c ft_tolower.c ft_strlen.c ft_bzero.c \
	ft_memset.c ft_memcpy.c
	
OBJECTS =	${SOURCES:.c=.o}

all:${NAME}
${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}
%.o: %.c
	gcc ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJECTS}

fclean:
	rm -f ${NAME} ${OBJECTS}

test:
	gcc main.c -L. libft -o test

re:
	make fclean
	make

.PHONY: all clean fclean test re
	
