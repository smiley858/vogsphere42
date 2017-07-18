/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguthaus <pguthaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 04:52:29 by pguthaus          #+#    #+#             */
/*   Updated: 2017/07/16 17:55:50 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

char	resolve(char **sudoku, int row, int col)
{
	char	i;

	if (row == 8 && col == 9)
		return (42);
	if (col == 9)
	{
		col = 0;
		row++;
	}
	if (row != 10 && col != 10 && sudoku[row][col] != EMPTY_CHAR)
		return (resolve(sudoku, row, col + 1));
	i = ':';
	while (--i >= '1')
	{
		if (is_col_free(sudoku, i, col) && is_row_free(sudoku, i, row) &&
				is_block_free(sudoku, i, col, row))
		{
			sudoku[row][col] = i;
			if (resolve(sudoku, row, col + 1))
				return (42);
			sudoku[row][col] = EMPTY_CHAR;
		}
	}
	return (0);
}

char	resolve_aux(char **sudoku, int row, int col)
{
	if (resolve(sudoku, row, col) == 0)
	{
			ft_putstr("Error\n", 0);
			return (0);
	}
	else
		return (42);
}
