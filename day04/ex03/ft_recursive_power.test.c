/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:36:21 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/11 17:12:27 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int x;

	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else
		x = nb * ft_recursive_power(nb, power - 1);
	return (x);
}

int		main(void)
{
	printf("%d", ft_recursive_power(-5, 3));
	return (0);
}
