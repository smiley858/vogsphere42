/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:25:49 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 11:25:47 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*mem;

	mem = dest;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (mem);
}

int		main(void)
{
	char c1[8] = "bonjour";
	char c2[8] = "bonjour";

	printf("%s\n", strcpy(c2, "hello"));
	printf("%s\n", ft_strcpy(c1, "hello"));
	return(0);
}
