/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 13:30:25 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 16:59:55 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_range.c"

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
	int		size;

	size = ft_ultimate_range(&range, ft_atoi(argv[1]), ft_atoi(argv[2]));
	printf("range of size: %d\n", size);
	while (index < (ft_atoi(argv[2]) - ft_atoi(argv[1])))
	{
		printf("%d ", range[index]);
		index++;
	}
	return (0);
}
