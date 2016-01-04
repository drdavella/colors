CC=g++
CFLAGS=-Wall -Werror -std=c++11
LIBS=-lncurses

EXEC_NAME=colors
SRC_NAME=${EXEC_NAME}.cpp

all: ${EXEC_NAME}


${EXEC_NAME}: ${SRC_NAME}
	g++ ${CFLAGS} -o $@ $^ ${LIBS}

clean:
	rm -f ${EXEC_NAME}
	rm -f *.o
