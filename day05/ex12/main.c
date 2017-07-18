/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:09:20 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 17:51:17 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "ft_str_is_numeric.c"

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("usage: ./a.out \"string\"\n");
	else
	{
		printf("%d\n",ft_str_is_numeric(argv[1]));
	}
	return (0);
}
