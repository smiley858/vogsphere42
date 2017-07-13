/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:41:51 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/11 18:24:32 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int mem;
	int returned;

	returned = nb;
	if (nb > 0)
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
	printf("%d", ft_iterative_factorial(8));
	return (0);
}
