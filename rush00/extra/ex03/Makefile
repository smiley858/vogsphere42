CC= gcc
CFLAGS= -Wall -Werror -Wextra

all: rush03

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@

rush03 : main.o ft_putchar.o rush03.o
		$(CC) $(CFLAGS) $^ -o $@
