/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:41:45 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 15:05:09 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*mem_find;

	mem_find = to_find;
	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		if (*str == *to_find)
		{
			to_find++;
			if (*to_find == 0)
				return (str - (to_find - mem_find - 1));
		}
		else if (to_find != mem_find)
		{
			to_find = mem_find;
			str--;
		}
		str++;
	}
	return (0);
}
