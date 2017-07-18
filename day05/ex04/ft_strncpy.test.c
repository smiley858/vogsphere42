/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:21:31 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 19:27:33 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*mem;

	mem = dest;
	while (n > 0)
	{
		if (*src == 0)
			*dest = 0;
		else
		{
			*dest = *src;
			src++;
		}
		dest++;
		n--;
	}
	return (mem);
}
