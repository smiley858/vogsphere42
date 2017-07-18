/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguthaus <pguthaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 04:52:12 by pguthaus          #+#    #+#             */
/*   Updated: 2017/07/16 16:17:06 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putstr(char *str, char point)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
		if (point)
		{
			write(1, " ", 1);
		}
	}
}

void	display_sudoku(char **sudoku)
{
	int	i;

	i = 0;
	while (i <= 8)
	{
		ft_putstr(sudoku[i], 42);
		ft_putstr("\n", 0);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		index;
	char	*head;

	index = 0;
	head = str;
	while (*head != 0)
	{
		head++;
		index++;
	}
	return (index);
}
