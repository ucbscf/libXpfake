.o:
	gcc -c -Wall -Werror -fpic xp.c

libXp.so: xp.o
	gcc -shared -o libXp.so xp.o

all: libXp.so
