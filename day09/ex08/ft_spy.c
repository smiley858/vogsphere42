/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:12:13 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/14 16:33:02 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_charcasecmp(char c, char d)
{
	if (c >= 65 && c <= 90)
	{
		if ((c == d) || (c + 32 == d))
			return (1);
		else
			return (0);
	}
	else if (c >= 97 && c <= 122)
	{
		if ((c == d) || (c - 32 == d))
			return (1);
		else
			return (0);
	}
	return (0);
}

int		ft_strcmp(char *str, char *comp)
{
	while (*str != 0)
	{
		if (ft_charcasecmp(*str, *comp) == 1)
		{
			comp++;
			if (*comp == 0)
				return (1);
		}
		str++;
	}
	return (0);
}

int		contains(char *str)
{
	if (ft_strcmp(str, "president")
			|| ft_strcmp(str, "Powers")
			|| ft_strcmp(str, "attack"))
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int	mem_argc;

	if (argc == 1)
		return (0);
	mem_argc = 0;
	while (mem_argc < argc)
	{
		if (contains(argv[mem_argc]) == 1)
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		mem_argc++;
	}
	return (0);
}
