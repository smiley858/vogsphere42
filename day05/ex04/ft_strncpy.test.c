/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:21:31 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 21:36:46 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int		main(void)
{
	char c1[8] = "bonjour";
	char c2[8] = "bonjour";

	printf("%s\n", strncpy(c2, "hello", 8));
	printf("%s\n", ft_strncpy(c1, "hello", 8));
	return(0);
}
