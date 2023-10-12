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

NAME =	libftprintf.a
CFLAGS =	-Wall -Wextra -Werror
SOURCES = ft_printf.c ft_util1.c ft_printers1.c ft_printers2.c

HEADER = libftprintf.h

OBJECTS =	${SOURCES:.c=.o}

#metodo implicito
%.o:%.c $(HEADER)
	gcc ${CFLAGS} -c $< -o $@

#mis metodos
all:${NAME}
${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}

fclean:
	rm -f ${NAME} ${OBJECTS} test

re:
	make fclean
	make

test:
	make clean
	make
	gcc main.c -L. -lftprintf -o test
	./test

debug:
	
	gcc main.c  ${CFLAGS} -L -lftprintf ${SOURCES} -g -o test
	lldb ./test


.PHONY: all clean fclean re test
	
