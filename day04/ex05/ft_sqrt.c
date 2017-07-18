/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:48:12 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 10:46:07 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	search;

	search = 0;
	if (nb < 0)
		return (0);
	else
	{
		while (search * search < nb)
		{
			search++;
		}
		return ((search * search == nb) ? search : 0);
	}
}
