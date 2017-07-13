/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:51:15 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 13:22:24 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		puissancedix(int nb)
{
	int	puis;

	puis = 1;
	while (nb > 1)
	{
		puis *= 10;
		nb--;
	}
	return (puis);
}

void	count_digit(int *digit_index, int *modifier, char *str)
{
	while (*str != 0)
	{
		(*digit_index)++;
		str++;
	}
	str = str - *digit_index;
	if (*str == '-')
	{
		*modifier = -1;
		str++;
		(*digit_index)--;
	}
}

int		escape_non_num(char *str)
{
	char	*mem;

	mem = str;
	if (*str != '-')
	{
		if ((*str < 48) || (*str > 57))
		{
			return (1);
		}
	}
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

	if (*str == '+')
		str++;
	if (escape_non_num(str) == 1)
		return (0);
	digit_index = 0;
	modifier = 1;
	count_digit(&digit_index, &modifier, str);
	nb = 0;
	if (modifier == -1)
		str++;
	while (digit_index > 0)
	{
		nb += (puissancedix(digit_index) * (*str - '0'));
		digit_index--;
		str++;
	}
	if (modifier == -1)
		nb = nb * modifier;
	return (nb);
}
