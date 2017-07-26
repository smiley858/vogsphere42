# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbaraud <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/22 15:40:02 by rbaraud           #+#    #+#              #
#    Updated: 2017/07/23 21:24:57 by gchojnac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c classics.c format_input.c reco_rush.c test_sheet_rush00.c column_rush00.c
OBJECTS = main.o classics.o format_input.o reco_rush.o test_sheet_rush00.o column_rush00.o

all: $(NAME)

$(OBJECTS): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) liblist.a

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
