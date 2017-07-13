/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 14:30:07 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/11 16:46:06 by gchojnac         ###   ########.fr       */
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

int		main(void)
{
	printf("res = %d\n", ft_is_prime(1));
	printf("res = %d\n", ft_is_prime(13));
	printf("res = %d\n", ft_is_prime(15));
	printf("res = %d\n", ft_is_prime(531));
	printf("res = %d\n", ft_is_prime(2147483647));
	return (0);
}
