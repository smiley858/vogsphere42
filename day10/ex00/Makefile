# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/27 16:44:20 by gchojnac          #+#    #+#              #
#    Updated: 2017/07/27 17:16:37 by gchojnac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRC		=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ		=	$(SRC:.c=.o)
HEADER	=	includes

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

RED		=	\033[1;31m
GREEN	=	\033[1;32m
NC		=	\033[0m

.PHONY	= all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "[$(GREEN)✓$(NC)] library $(NAME) built"

%.o:%.c
	@$(CC) -c $< -o $@ -I$(HEADER) $(CFLAGS)
	@echo "[$(GREEN)✓$(NC)] Object $@ compiled"

clean:
	@rm -Rf $(OBJ)
	@echo "[$(RED)-$(NC)] Objects from $(NAME) cleaned"

fclean: clean
	@rm -Rf $(NAME)
	@echo "[$(RED)-$(NC)] Executable $(NAME) cleaned"

re: fclean all
