/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:47:26 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/07 12:37:57 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
