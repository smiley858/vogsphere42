/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 23:52:29 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/06 00:01:25 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test-include/ft_putchar.h"

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

int		main(void)
{
	ft_is_negative(10);
	ft_is_negative(-5);
	ft_is_negative(0);
	ft_is_negative(200054);
	return (0);
}
