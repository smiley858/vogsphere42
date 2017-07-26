/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 13:57:40 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/24 14:08:48 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/board.h"
#include <stdlib.h>

t_board		*t_board_create(char **tab, int width, int height)
{
	t_board		*to_return;

	to_return = malloc(sizeof(t_board));
	to_return->width = width;
	to_return->height = height;
	to_return->tab = tab;
	return (to_return);
}
