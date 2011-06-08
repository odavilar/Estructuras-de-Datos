OBJECTS=Nodo.o PilaSimple.o

CFLAGS=-Wall -ggdb -std=c99

all: main

clean:
	rm *.o *.d

main: ${OBJECTS} main.c
	${CC} -o main ${CFLAGS} ${OBJECTS} main.c


