/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sheet_rush00.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:19:16 by cfarjane          #+#    #+#             */
/*   Updated: 2017/07/23 23:34:39 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include "column_rush01.h"
#include "test_sheet_rush01.h"

int		first_line(char **tab, int x)
{
	int i;

	i = 1;
	if (tab[0][0] != '/' || tab[0][x - 1] != '\')
		return (FAILURE);
	while (tab[0][i] != '*')
	{
		if (tab[0][i] != '*')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

int		middle(char **tab, int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (tab[j][0] != '*' || tab[j][x - 1] != '*')
		return (FAILURE);
	while (j != y - 1)
	{
		while (i != x - 1)
		{
			if (tab[j][i] != ' ')
				return (FAILURE);
			i++;
		}
		i = 1;
		j++;
	}
	return (SUCCESS);
}

int		last_line(char **tab, int x, int y)
{
	int i;

	i = 1;
	if (tab[y - 1][0] != '\' || tab[y - 1][x - 1] != '/')
		return (FAILURE);
	while (tab[y - 1][i] != '*' && tab[y - 1][i])
	{
		if (tab[y - 1][i] != '*')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

int		others(char **tab, int x, int y)
{
	int	flag;

	flag = 0;
	if (x == 1 && y == 1 && flag == 0)
		flag = (tab[0][0] != 'o') ? 1 : 0;
	else if (y == 1 && flag == 0)
		flag = (first_line(tab, x)) ? 1 : 0;
	else if (y == 2 && flag == 0)
		flag = (first_line(tab, x) || last_line(tab, x, y)) ? 1 : 0;
	else if (x == 1 && flag == 0)
		flag = (first_column(tab, y)) ? 1 : 0;
	else if (x == 2 && flag == 0)
		flag = (first_column(tab, y) || last_column(tab, x, y)) ? 1 : 0;
	return ((flag) ? FAILURE : SUCCESS);
}

int		is_rush00(char **tab, int x, int y)
{
	int		flag;

	flag = 0;
	if (others(tab, x, y))
		return (0);
	if (x > 1 && y > 1)
		if (first_line(tab, x) || flag)
			flag = 1;
	if (x > 1 && y > 1)
		if (middle(tab, x, y) || flag)
			flag = 1;
	if (x > 1 && y > 1)
		if (last_line(tab, x, y) || flag)
			flag = 1;
	return ((flag) ? 0 : 1);
}
