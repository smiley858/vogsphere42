/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:31:25 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 14:38:02 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_strupcase.c"

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("usage: ./a.out \"string\"\n");
	else
	{
		printf("%s\n",ft_strupcase(argv[1]));
	}
	return (0);
}
