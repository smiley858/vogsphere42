/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 18:38:56 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/20 17:32:16 by gchojnac         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int size_dest;
	int size_src;

	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] != '\0')
		size_dest++;
	while (src[size_src] != '\0')
	{
		dest[size_dest + size_src] = src[size_src];
		size_src++;
	}
	return (dest + size_dest + size_src);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		sum;
	int		index;
	char	*str;

	if (argc == 0)
		return (0);
	index = 0;
	sum = 0;
	while (++index < argc)
		sum += ft_strlen(argv[index]);
	sum += (argc - 2);
	if ((str = malloc(sum * sizeof(char))) == 0)
		return (0);
	index = 0;
	*str = 0;
	while (++index < argc)
	{
		str = ft_strcat(str, argv[index]);
		*str = '\n';
		str++;
	}
	*(--str) = 0;
	return (str - sum);
}
