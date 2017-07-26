/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classics.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:40:39 by rbaraud           #+#    #+#             */
/*   Updated: 2017/07/23 23:15:55 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classics.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
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

char	*ft_strrev(char *str)
{
	char	stock;
	int		index;
	int		index2;

	index = 0;
	index2 = 0;
	while (str[index2 + 1])
	{
		if (index2 == 2147483647)
			return (str);
		index2++;
	}
	while (index < index2)
	{
		stock = str[index2];
		str[index2] = str[index];
		str[index] = stock;
		index++;
		index2--;
	}
	return (str);
}
