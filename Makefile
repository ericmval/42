# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 12:08:42 by emartin2          #+#    #+#              #
#    Updated: 2023/10/02 22:06:24 by emartin2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
CFLAGS =	-Wall -Wextra -Werror
SOURCES = ft_isalpha.c ft_isdigit.c ft_memchr.c ft_strchr.c ft_strncmp.c \
	ft_strrchr.c ft_toupper.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memcmp.c ft_strcmp.c ft_strnstr.c ft_tolower.c ft_strlen.c ft_bzero.c \
	ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c\
	ft_putnbr_fd.c ft_split.c

SOURCES_BONUS = 
HEADER = libft.h

OBJECTS =	${SOURCES:.c=.o}
OBJECTSBONUS =	${SOURCES_BONUS:.c=.o}

#metodo implicito
%.o:%.c $(HEADER)
	gcc ${CFLAGS} -c $< -o $@

#mis metodos
all:${NAME}
${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

bonus: ${OBJECTS} $(OBJECTSBONUS)
	ar rcs ${NAME} ${OBJECTS} $(OBJECTSBONUS)
	touch bonus

clean:
	rm -f ${OBJECTS}

fclean:
	rm -f ${NAME} ${OBJECTS}
	rm -f bonus

re:
	make fclean
	make

.PHONY: all clean fclean re
	
