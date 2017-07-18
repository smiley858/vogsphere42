/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 13:16:19 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 13:26:27 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		index;
	char	*head;

	index = 0;
	head = str;
	while (*head != 0)
	{
		head++;
		index++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*to_return;
	int		length;
	int		index;

	length = ft_strlen(src);
	to_return = malloc(sizeof(char) * length);
	index = 0;
	while (index < length)
	{
		to_return[index] = src[index];
		index++;
	}
	to_return[index] = 0;
	return (to_return);
}
