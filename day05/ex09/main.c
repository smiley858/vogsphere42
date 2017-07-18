/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:31:25 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 14:47:51 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_strlowcase.c"

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("usage: ./a.out \"string\"\n");
	else
	{
		printf("%s\n",ft_strlowcase(argv[1]));
	}
	return (0);
}
