/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:07:39 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 12:06:26 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == 0 && *str2 == 0)
			return (0);
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

void	bubble(int nb, char **tab)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (i < nb - 1)
	{
		j = i + 1;
		while (j < nb)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		index;

	index = 1;
	bubble(argc - 1, argv + 1);
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
