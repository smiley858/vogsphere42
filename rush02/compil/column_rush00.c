/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_rush00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:19:28 by cfarjane          #+#    #+#             */
/*   Updated: 2017/07/23 22:16:04 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "column_rush00.h"
#include "ft_boolean.h"

int		first_column(char **tab, int y)
{
	int i;

	i = 1;
	if (tab[0][0] != 'o' || tab[y][0] != 'o')
		return (FAILURE);
	while (tab[i][0] != 'o')
	{
		if (tab[i][0] != '|')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

int		last_column(char **tab, int x, int y)
{
	int i;

	i = 1;
	if (tab[0][x] != 'o' || tab[y][x] != 'o')
		return (FAILURE);
	while (tab[i][x] != 'o')
	{
		if (tab[i][x] != '|')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}
