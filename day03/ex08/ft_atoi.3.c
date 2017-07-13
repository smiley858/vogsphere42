/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:51:15 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 15:27:32 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		res;
	int		modifier;

	res = 0;
	modifier = 1;
	while ((*str <= 13 && *str >= 7) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		modifier = (*str++ == '-') ? -1 : 1;
	while (*str <= 57 && *str >= 48)
	{
		res = res * 10 + (*str - '0') * modifier;
		str++;
	}
	return (res);
}
