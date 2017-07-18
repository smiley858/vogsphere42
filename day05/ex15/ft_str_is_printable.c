/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 17:58:02 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 18:00:41 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
	{
		if ((str[index] >= 0 && str[index] <= 31))
			return (0);
		index++;
	}
	return (1);
}
