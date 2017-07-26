/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:41:45 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 23:49:45 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *str, char *to_find)
{
	while (*to_find != 0)
	{
		if (*str == *to_find)
		{
			str++;
			to_find++;
			if (*to_find == 0)
				return (1);
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*mem_find;

	mem_find = to_find;
	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		if (match(str, to_find) == 1)
			return (str);
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
