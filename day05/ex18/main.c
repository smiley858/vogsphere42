/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:09:20 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 18:24:10 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "ft_strncat.c"

int		main(int argc, char **argv)
{
	if (argc != 3)
		printf("usage: ./a.out \"string\" \"string\"\n");
	else
	{
		printf("%s\n",ft_strncat(argv[1], argv[2], 4));
	}
	return (0);
}
