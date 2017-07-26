# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/22 12:18:45 by gchojnac          #+#    #+#              #
#    Updated: 2017/07/22 16:31:03 by gchojnac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: compile clean

compile:
	clang -c -Wall -Wextra -Werror sources/*.c
	ar rc libft.a *.o

clean:
	rm -f *.o

fclean:
	rm -f libft.a
