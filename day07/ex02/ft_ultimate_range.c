/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:33:09 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 16:59:34 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		index;

	size = max - min;
	if (size <= 0)
		return (0);
	*range = malloc(size * sizeof(int));
	index = 0;
	while (index < size)
	{
		range[0][index] = min + index;
		index++;
	}
	return (size);
}
