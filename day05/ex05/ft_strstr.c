/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:41:45 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/19 14:24:24 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *str, char *to_find)
{
	while (*to_find != 0)
	{
		if (*str == *to_find)
		{
			str++;
			to_find++;
			if (*to_find == 0)
				return (1);
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*mem_find;

	mem_find = to_find;
	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		if (match(str, to_find) == 1)
			return (str);
		str++;
	}
	return (0);
}
