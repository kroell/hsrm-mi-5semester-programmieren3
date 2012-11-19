CC = gcc
CFLAGS = -ansi -Wall -g
NAME = heron_pro

all: $(NAME)

$(NAME): $(NAME).o
	$(CC) $(CFLAGS) $(NAME).o -o $(NAME)

$(NAME).o: $(NAME).c
	$(CC) -c $(CFLAGS) $(NAME).c -o $(NAME).o

.PHONY: clean

clean:
	-/bin/rm -f $(NAME)

run:
	./$(NAME)

valgrind:
	valgrind ./$(NAME)