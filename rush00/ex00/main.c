/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 08:03:14 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/23 22:00:45 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush02(int x, int y);

int		main(int argc, char **argv)
{
	(void)argc;
	rush02(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
