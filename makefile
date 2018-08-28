# 	Rules go here and MUST HAVE A TAB
# 	Rules go here and MUST HAVE A TAB
# 	Rules go here and MUST HAVE A TAB

CC = gcc
CFLAGS = -Wall -ansi
LIBS =
SRC = main.h
TARGET = ass1
OBJ = main.o

ass1: $(OBJ)
	$(CC) $(CFLAGS) -o ass1 $(OBJ) $(LIBS)

main.o: main.c

clean:
	/bin/rm -f *.o $(TARGET)
