# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emartin2 <emartin2@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 20:11:31 by emartin2          #+#    #+#              #
#    Updated: 2023/10/13 20:11:44 by emartin2         ###   ########.fr        #
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
	gcc main.c -L. -lftprintf -o test
	./test

debug:
	
	gcc main.c  ${CFLAGS} -L -lftprintf ${SOURCES} -g -o test
	lldb ./test


.PHONY: all clean fclean re test
	
