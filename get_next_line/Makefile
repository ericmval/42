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

NAME =	libget_next_line.a
CFLAGS =	-Wall -Wextra -Werror
SOURCES = get_next_line_utils.c get_next_line.c

HEADER = get_next_line.h

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
	make re
	gcc main.c -L. libget_next_line.a -o test
	./test

debug:
	
	gcc main.c  ${CFLAGS} -L ${NAME} ${SOURCES} -g -o test
	lldb ./test


.PHONY: all clean fclean re test
	
