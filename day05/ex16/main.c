/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:09:20 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 18:16:41 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "ft_strcat.c"

int		main(int argc, char **argv)
{
	if (argc != 3)
		printf("usage: ./a.out \"string\" \"string\"\n");
	else
	{
		printf("%s\n",ft_strcat(argv[1], argv[2]));
	}
	return (0);
}
