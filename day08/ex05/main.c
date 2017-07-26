/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:07:52 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/21 00:14:31 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_param_to_tab.c"
#include "ft_stock_par.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_stock_par		*ptr;
	int				index;

	index = 0;
	ptr = ft_param_to_tab(argc, argv);
	while (ptr[index].str != 0)
	{
		printf("%s\n", ptr[index].str);
		printf("%d\n", ptr[index].size_param);
		index++;
	}
	return (0);
}
