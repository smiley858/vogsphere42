/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguthaus <pguthaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 04:52:52 by pguthaus          #+#    #+#             */
/*   Updated: 2017/07/16 17:54:04 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"
#include "ft_sudoku.h"
#include "ft_valid.h"
#include <stdlib.h>


char	is_param_nine(char **argv)
{
	int	index;

	index = 1;
	while (index < 10)
	{
		if (ft_strlen(argv[index]) != 9)
			return (0);
		index++;
	}
	return (42);
}

int		ft_countobs(char **argv)
{
	int	count;
	int	x;
	int y;

	count = 0;
	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] >= '1' && argv[x][y] <= '9')
				count++;
			else if (argv[x][y] != EMPTY_CHAR)
				return (0);
			y++;
		}
		x++;
	}
	if (count < 17)
	{
		return (0);
	}
	return (42);
}

int		main(int argc, char **argv)
{
	char	**sudoku;
	int		i;

	if (argc != 10 || is_param_nine(argv) == 0)
	{
		ft_putstr("Error\n", 0);
		return (0);
	}
	sudoku = (char **)malloc(sizeof(char *) * 9);
	i = 1;
	while (i < 10)
	{
		sudoku[i - 1] = argv[i];
		i++;
	}
	if (!ft_countobs(sudoku))
	{
		ft_putstr("Error\n", 0);
		return (0);
	}
	if (resolve_aux(sudoku, 0, 0) == 0)
		return (0);
	display_sudoku(sudoku);
}
