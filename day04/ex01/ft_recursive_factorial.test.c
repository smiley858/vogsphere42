/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 22:12:16 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/13 11:36:33 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	int i[5];

	i[0] = 0;
	i[1] = 5;
	i[2] = 12;
	i[3] = -2;
	i[4] = 14;
	printf("%d %d \n", i[0], ft_recursive_factorial(i[0]));
	printf("%d %d \n", i[1], ft_recursive_factorial(i[1]));
	printf("%d %d \n", i[2], ft_recursive_factorial(i[2]));
	printf("%d %d \n", i[3], ft_recursive_factorial(i[3]));
	printf("%d %d \n", i[4], ft_recursive_factorial(i[4]));
}
