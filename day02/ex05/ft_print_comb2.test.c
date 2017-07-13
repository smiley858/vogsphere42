/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:09:29 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/11 11:35:21 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_comb2(void)
{
	int	c1;
	int	c2;

	c1 = 0;
	while (c1 <= 99)
	{
		c2 = c1 + 1;
		while (c2 <= 99)
		{
			ft_putchar(c1 / 10 + '0');
			ft_putchar(c1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(c2 / 10 + '0');
			ft_putchar(c2 % 10 + '0');
			if (c1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			c2++;
		}
		c2 = 0;
		c1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
