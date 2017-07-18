/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:41:45 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/13 14:39:51 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*mem_find;

	mem_find = to_find;
	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		if (*str == *to_find)
		{
			to_find++;
			if (*to_find == 0)
				return (str - (to_find - mem_find - 1));
		}
		else if (to_find != mem_find) 
		{
			to_find = mem_find;
			str--;
		}
		str++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 3)
		printf("2 parameters : haystack and needle.");
	else
	{
		printf("%s    %s\n", argv[1], ft_strstr(argv[1],argv[2]));
		return (0);
	}
}
