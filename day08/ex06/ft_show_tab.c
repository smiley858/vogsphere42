/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:07:52 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/23 10:17:22 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		index;

	index = 0;
	while (tab[index] != 0)
	{
		ft_putstr(tab[index]);
		ft_putchar('\n');
		index++;
	}
}

void	ft_putnbr(int nb)
{
	int mem;
	int nb_digit;
	int pow;
	int modifier;

	mem = nb;
	pow = 1;
	nb_digit = 0;
	modifier = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		modifier = -1;
	}
	while ((mem = mem / 10) != 0)
	{
		nb_digit++;
		pow *= 10;
	}
	while (nb_digit >= 0)
	{
		ft_putchar((nb / pow) % 10 * modifier + '0');
		nb_digit--;
		pow /= 10;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int				index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		ft_putchar('\n');
		ft_putnbr(par[index].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[index].tab);
		index++;
	}
}
