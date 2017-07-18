/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:48:50 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/14 12:05:42 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != 0)
	{
		if (*str > 32)
		{
			*ptr = (*ptr - 33 + 42) % (126 - 33 + 1) + 33;
		}
		ptr++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	if (argc == 1 || argc > 2)
		printf("usage : ./a.out \"string\"\n");
	else
		printf("%s\n", ft_rot42(argv[1]));
	return (0);
}
