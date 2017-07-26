/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reco_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:39:25 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/23 23:05:34 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include "test_sheet_rush00.h"
#include <stdio.h>

int		get_width(char **tab)
{
	return (ft_strlen(tab[0]));
}

int		get_height(char **tab)
{
	int		index;
	char	**head;

	index = 0;
	head = tab;
	while (*head != 0)
	{
		head++;
		index++;
	}
	return (index);
}

void	recognize(char **tab)
{
	int		nb_param1;
	int		nb_param2;
	int		rushes[5];

	nb_param1 = get_width(tab);
	nb_param2 = get_height(tab);
	rushes[0] = (is_rush00(tab, nb_param1, nb_param2)) ? 1 : 0;
	if (rushes[0])
	{
		ft_putstr("c'est la colle0");
		ft_putnbr(0);
		ft_putstr(" [");
		ft_putnbr(nb_param1);
		ft_putstr("] [");
		ft_putnbr(nb_param2);
		ft_putstr("] \n");
	}
	else
	{
		ft_putstr("Aucune");
	}
}
