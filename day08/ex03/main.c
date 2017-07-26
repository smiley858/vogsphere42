/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 09:41:35 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/20 09:49:25 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		res;
	int		modifier;

	res = 0;
	modifier = 1;
	while ((*str <= 13 && *str >= 7) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		modifier = (*str++ == '-') ? -1 : 1;
	while (*str <= 57 && *str >= 48)
	{
		res = res * 10 + (*str - '0') * modifier;
		str++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("usage: ./a.out \"int\"");
	else
		printf("%d\n", ABS(ft_atoi(argv[1])));
	return (0);
}
