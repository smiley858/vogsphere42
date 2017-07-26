/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_rush03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:19:28 by cfarjane          #+#    #+#             */
/*   Updated: 2017/07/23 23:25:07 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "column_rush03.h"
#include "ft_boolean.h"

int		first_column(char **tab, int y)
{
	int i;

	i = 1;
	if (tab[0][0] != 'A' || tab[y][0] != 'A')
		return (FAILURE);
	while (tab[i][0] != 'A')
	{
		if (tab[i][0] != 'B')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

int		last_column(char **tab, int x, int y)
{
	int i;

	i = 1;
	if (tab[0][x] != 'C' || tab[y][x] != 'C')
		return (FAILURE);
	while (tab[i][x] != 'C')
	{
		if (tab[i][x] != 'B')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}
