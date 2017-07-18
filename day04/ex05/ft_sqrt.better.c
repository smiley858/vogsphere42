/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:48:12 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/13 14:32:40 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	float		guess[2];

	if (nb < 0)
		return (0);
	else
	{
		guess[0] = nb / 2;
		guess[1] = 0.5 * (guess[0] + (nb / guess[0]));
		if (guess[0] != guess[1])
		{
			while (guess[1] != guess[0])
			{
				guess[1] = 0.5 * (guess[0] + (nb / guess[0]));
				guess[0] = guess[1];
				guess[1] = 0.5 * (guess[0] + (nb / guess[0]));
			}
		}
		return (((int)guess[0] * (int)guess[0] == nb) ? guess[0] : 0);
	}
}
