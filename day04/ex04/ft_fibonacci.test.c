/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:55:45 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 18:31:03 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	else
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}

int		main(void)
{
	printf("%d ", ft_fibonacci(1));
	printf("%d ", ft_fibonacci(2));
	printf("%d ", ft_fibonacci(3));
	printf("%d ", ft_fibonacci(4));
	printf("%d ", ft_fibonacci(5));
	printf("%d ", ft_fibonacci(6));
	return (0);
}
