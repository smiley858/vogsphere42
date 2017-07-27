/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 13:30:25 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/26 12:25:31 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_range.c"

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
	(void)argc;
	int		index = 0;
	int		*range;

	printf("range of size: %d\n", (ft_atoi(argv[2]) - ft_atoi(argv[1])));
	fflush(stdout);
	range = ft_range(ft_atoi(argv[1]), ft_atoi(argv[2]));
	if (index < (ft_atoi(argv[2]) - ft_atoi(argv[1])))
		while (index < (ft_atoi(argv[2]) - ft_atoi(argv[1])))
		{
			printf("%d ", range[index]);
			index++;
		}
	else
	{
		printf("erreur de taille\n");
	}
	return (0);
}
