/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:41:51 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/16 19:53:21 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int returned;

	returned = nb;
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		while (nb > 0)
		{
			nb--;
			if (nb != 0)
				returned = returned * nb;
		}
		return (returned);
	}
	return (0);
}
