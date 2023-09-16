# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartin2 <emartin2@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 12:08:42 by emartin2          #+#    #+#              #
#    Updated: 2023/09/14 19:58:45 by emartin2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
TARGET =	libft.a
CFLAGS =	-Wall -Wextra -Werror
SOURCES =	ft_isalpha.c ft_isdigit.c main.c
OBJECTS =	${SOURCES:.c=.o}

all:${TARGET}
${TARGET}: ${OBJECTS}
	gcc  ${CFLAGS} ${OBJECTS} -o ${TARGET} ${OBJECTS}
#	ar rcs ${TARGET} ${SOURCES}
%.o: %.c
	gcc ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJECTS}

fclean:
	rm -f ${TARGET}

test:
	gcc main.c -L. libft -o test

//.PHONY: all clean fclean
	
