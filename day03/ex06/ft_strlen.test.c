/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 12:57:21 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/07 14:36:57 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		main(void)
{
	printf("taille de salut: %d", ft_strlen("salut"));
	return (0);
}
