/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:52:28 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 15:01:00 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] = str[index] - 32;
	index++;
	while (str[index] != 0)
	{
		if (!(str[index - 1] >= 'A' && str[index - 1] <= 'Z')
				&& !(str[index - 1] >= 'a' && str[index - 1] <= 'z')
				&& !(str[index - 1] >= '0' && str[index - 1] <= '9'))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 32;
		}
		else
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
				str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
