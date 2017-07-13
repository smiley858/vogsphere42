/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:35:10 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/05 23:16:52 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../test-include/ft_putchar.h"

void	ft_print_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		ft_putchar(digit);
		digit++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
