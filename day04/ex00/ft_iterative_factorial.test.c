/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:41:51 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/16 19:52:57 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int returned;

	returned = nb;
	if (nb > 0 && nb < 13)
	{
		while (nb > 0)
		{
			nb--;
			if (nb != 0)
				returned = returned * nb;
		}
		return (returned);
	}
	else
	{
		return (0);
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_iterative_factorial(-99));
	printf("%d\n", ft_iterative_factorial(18));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	return (0);
}
