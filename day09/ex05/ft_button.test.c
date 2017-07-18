/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 12:13:39 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/14 12:25:09 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


int	ft_button(int i, int j, int k)
{
	int	mem;

	while (i > j || j > k)
	{
		if (i > j)
		{
			mem = i;
			i = j;
			j = mem;
		}
		if (j > k)
		{
			mem = j;
			j = k;
			k = mem;
		}
	}
	return (j);
}

int	main(void)
{
	printf("%d", ft_button(10, 2, 50));
	return(0);
}
