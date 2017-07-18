/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:38:59 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/14 13:48:21 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int	flytime;

	flytime = 0;
	while (base != 1)
	{
		if (base % 2 == 0)
			base = base / 2;
		else
			base = base * 3 + 1;
		flytime++;
	}
	return (flytime);
}
