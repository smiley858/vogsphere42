/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:11:59 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/08 12:49:35 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test-include/ft_putchar.h"

void	ft_print_comb(void)
{
	char c[3];

	c[2] = '0';
	while (c[2] <= '7')
	{
		c[1] = c[2] + 1;
		while (c[1] <= '9')
		{
			c[0] = c[1] + 1;
			while (c[0] <= '9')
			{
				ft_putchar(c[2]);
				ft_putchar(c[1]);
				ft_putchar(c[0]);
				if ((c[2] != '7') || (c[1] != '8') || (c[0] != '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c[0]++;
			}
			c[1]++;
		}
		c[2]++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
