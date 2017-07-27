/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_rush00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:19:28 by cfarjane          #+#    #+#             */
/*   Updated: 2017/07/23 23:34:09 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "column_rush01.h"
#include "ft_boolean.h"

int		first_column(char **tab, int y)
{
	int i;

	i = 1;
	if (tab[0][0] != '/' || tab[y][0] != '\')
		return (FAILURE);
	while (tab[i][0] != '\')
	{
		if (tab[i][0] != '*')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

int		last_column(char **tab, int x, int y)
{
	int i;

	i = 1;
	if (tab[0][x] != '\' || tab[y][x] != '/')
		return (FAILURE);
	while (tab[i][x] != '/')
	{
		if (tab[i][x] != '*')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}
