CC= gcc
CFLAGS= -Wall -Werror -Wextra

all: rush00

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@

rush00 : main.o ft_putchar.o rush00.o
		$(CC) $(CFLAGS) $^ -o $@
