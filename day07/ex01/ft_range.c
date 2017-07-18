/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 13:27:12 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 14:30:33 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		index;
	int		*range;

	size = max - min;
	range = malloc(size * sizeof(int));
	index = 1;
	while (index < size)
	{
		range[index] = min + index;
		index++;
	}
	return (range);
}
