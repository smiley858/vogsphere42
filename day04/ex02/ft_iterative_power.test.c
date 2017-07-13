/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:49:56 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/11 16:14:05 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int mem;

	mem = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * mem;
		power--;
	}
	return (nb);
}

int		main(void)
{
	int	d[3];

	d[0] = 0;
	d[1] = 20;
	d[2] = -55;
	printf("%d res = %d\n", d[0], ft_iterative_power(d[0], 5));
	printf("%d res = %d\n", d[0], ft_iterative_power(d[0], 0));
	printf("%d res = %d\n", d[1], ft_iterative_power(d[1], 2));
	printf("%d res = %d\n", d[2], ft_iterative_power(d[2], 5));
	return (0);
}
