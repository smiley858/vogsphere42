/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:51:15 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 15:27:42 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		escape_non_num(char *str)
{
	char	*mem;

	mem = str;
	while (*str != 0)
	{
		str++;
		if ((*str < 48) || (*str > 57))
		{
			*str = '\0';
		}
	}
	str = mem;
	return (0);
}

int		ft_atoi(char *str)
{
	int		nb;
	int		digit_index;
	int		modifier;

	digit_index = 0;
	modifier = 1;
	nb = 0;
	if (*str == '-')
	{
		modifier = -1;
		str++;
	}
	while (*str != 0)
	{
		if (escape_non_num(str) == 0)
			nb = nb * 10 + *str - '0';
		digit_index++;
		str++;
	}
	return (nb * modifier);
}
