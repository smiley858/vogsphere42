/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:07:52 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/21 11:17:25 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_show_tab.c"
#include "ft_stock_par.h"
#include "ft_param_to_tab.c"

int		main(int argc, char **argv)
{
	t_stock_par		*ptr;

	ptr = ft_param_to_tab(argc, argv);
	ft_show_tab(ptr);
	return (0);
}
