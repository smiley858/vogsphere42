CC= gcc
CFLAGS= -Wall -Werror -Wextra

all: rush01

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@

rush0% : main.o ft_putchar.o rush0%.o
		$(CC) $(CFLAGS) $^ -o $@
