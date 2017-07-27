/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reco_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:39:25 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/23 23:33:32 by rbaraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reco_rush.h"

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

void	ft_display(int i)
{
	if (rushes[i])
	{
		ft_putstr("c'est la colle0");
		ft_putnbr(i);
		ft_putstr(" [");
		ft_putnbr(nb_param1);
		ft_putstr("] [");
		ft_putnbr(nb_param2);
		ft_putstr("] \n");
	}
}

void	recognize(char **tab)
{
	int		rushes[5];
	int		i;
	int		sum;

	rushes[0] = (is_rush00(tab, get_width(tab), get_hight(tab))) ? 1 : 0;
	rushes[1] = (is_rush01(tab, get_width(tab), get_hight(tab))) ? 1 : 0;
	rushes[2] = (is_rush02(tab, get_width(tab), get_hight(tab))) ? 1 : 0;
	rushes[3] = (is_rush03(tab, get_width(tab), get_hight(tab))) ? 1 : 0;
	rushes[4] = (is_rush04(tab, get_width(tab), get_hight(tab))) ? 1 : 0;
	i = 0;
	sum = 0;
	while (i < 5)
	{
		if (rushes[i])
		{
			ft_display(i);
			sum++;
		}
		i++;
	}
	if (!sum)
		ft_putstr("aucune\n");
}
