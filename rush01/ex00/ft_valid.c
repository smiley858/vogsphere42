/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguthaus <pguthaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 04:52:36 by pguthaus          #+#    #+#             */
/*   Updated: 2017/07/16 16:36:30 by pguthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_valid.h"

char	is_row_free(char **sudoku, char nb, int row)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[row][i] == nb)
			return (0);
		i++;
	}
	return (42);
}

char	is_col_free(char **sudoku, char nb, int col)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][col] == nb)
			return (0);
		i++;
	}
	return (42);
}

char	is_block_free(char **sudoku, char nb, int start_col, int start_row)
{
	int	max_col;
	int	max_row;

	start_col = start_col - start_col % 3;
	start_row = start_row - start_row % 3;
	max_col = start_col + 2;
	max_row = start_row + 2;
	while (start_row <= max_row)
	{
		while (start_col <= max_col)
		{
			if (sudoku[start_row][start_col] == nb)
				return (0);
			start_col++;
		}
		start_col -= 2;
		start_row++;
	}
	return (42);
}
