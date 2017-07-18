/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:25:46 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/14 11:03:53 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
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

void	display(int hour)
{
	int	pm;

	pm = 0;
	if (hour == 12)
		ft_putstr("12.00 P.M.");
	else if (hour == 0 || hour == 24)
		ft_putstr("12.00 A.M.");
	else
	{
		if (hour >= 13)
		{
			hour = hour - 12;
			pm = 1;
		}
		if (pm == 1)
		{
			ft_putnbr(hour);
			ft_putstr(".00 P.M.");
		}
		else
		{
			ft_putnbr(hour);
			ft_putstr(".00 A.M.");
		}
	}
}

void	ft_takes_place(int hour)
{
	int		beginning;
	int		ending;

	beginning = hour;
	ending = hour + 1;
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	display(beginning);
	ft_putstr(" AND ");
	display(ending);
	ft_putchar('\n');
}
