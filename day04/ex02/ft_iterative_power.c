/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:49:56 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/11 10:42:57 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int mem;

	mem = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * mem;
		power--;
	}
	return (nb);
}
