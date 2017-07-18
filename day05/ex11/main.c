/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:09:20 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 15:12:50 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "ft_str_is_alpha.c"

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("usage: ./a.out \"string\"\n");
	else
	{
		printf("%d\n",ft_str_is_alpha(argv[1]));
	}
	return (0);
}
