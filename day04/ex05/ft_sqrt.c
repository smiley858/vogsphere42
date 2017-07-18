/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:48:12 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 18:35:03 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	float		guess[2];

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
	return (guess[0]);
}
