/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:22:56 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/11 17:10:42 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 5;
	if (nb == 2)
		return (1);
	if (nb == 0 || nb == 1 || nb % 2 == 0)
		return (0);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb == 2147483647)
			return (1);
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 1;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb + i) != 1)
	{
		i += 1;
	}
	return (nb + i);
}

int		main(void)
{
	printf("%d", ft_find_next_prime(524));
	return (0);
}
