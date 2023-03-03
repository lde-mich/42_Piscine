
SRCS	= main.c ft_strlen.c

OBJECTS	= ${SRCS:.c=.o}
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

OUT	= ./a.out

CLEAN	= rm *.o

make:
	${CC} -o prova ${CFLAGS} ${SRCS} && ${OUT}

.PHONY : clean
clean :
	${CLEAN}$(objects) prova                             


