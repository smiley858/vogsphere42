/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 18:38:56 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 20:05:23 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_concat_params(int argc, char **argv)
{
	int		sum;
	int		index;
	char	*str;

	index = 0;
	sum = 0;
	while (++index < argc)
		sum += ft_strlen(argv[index]);
	sum += (argc - 2);
	str = malloc(sum * sizeof(char));
	index = 0;
	while (++index < argc)
	{
		while (*argv[index] != 0)
		{
			*str = *(argv[index]);
			(argv[index])++;
			str++;
		}
		*str = '\n';
		str++;
	}
	*(--str) = 0;
	return (str - sum);
}
