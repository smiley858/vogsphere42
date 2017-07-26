/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 21:49:20 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/20 17:44:15 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_split_whitespaces.c"

int		main(int argc, char **argv)
{
	char	**words;
	int		index;

	if (argc != 2)
		printf("usage: ./a.out \"string\"");
	else
	{
		index = 0;
		words = ft_split_whitespaces(argv[1]);
		if (words == 0)
			return (0);
		while (words[index] != 0)
		{
			printf("%s\n", words[index]);
			index++;
		}
	}
	return (0);
}
