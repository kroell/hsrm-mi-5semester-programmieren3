CC = gcc
CFLAGS = -ansi -Wall -g
NAME = a2

all: $(NAME)

$(NAME): $(NAME).o
	$(CC) $(CFLAGS) $(NAME).o -o $(NAME) -lm

$(NAME).o: $(NAME).c
	$(CC) -c $(CFLAGS) $(NAME).c -o $(NAME).o -lm

.PHONY: clean

clean:
	-/bin/rm -f $(NAME)

run:
	./$(NAME)

valgrind:
	valgrind ./$(NAME)