/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 10:05:54 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/10 09:21:23 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		level_count(int index, int beginning)
{
	int ligne;
	int	nb_star_ligne;
	int	max_star_ligne;
	int trace;

	ligne = index + 2;
	max_star_ligne = beginning;
	while (ligne > 0)
	{
		nb_star_ligne = max_star_ligne;
		trace = 0;
		while (nb_star_ligne > 0)
		{
			nb_star_ligne--;
			trace++;
		}
		max_star_ligne = max_star_ligne + 2;;
		ligne--;
	}
	return (trace);
}

void	level(int index, int beginning, int *spaces)
{
	int ligne;
	int	nb_star_ligne[2];
	int mem_spaces;

	fflush(stdout);
	mem_spaces = *spaces;
	ligne = index + 2;
	nb_star_ligne[1] = beginning;
	while (ligne > 0)
	{
		while (*spaces > 0)
		{
			ft_putchar(' ');
			(*spaces)--;
		}
		*spaces = --mem_spaces;
		nb_star_ligne[0] = nb_star_ligne[1];
		ft_putchar('/');
		while (nb_star_ligne[0] > 0)
		{
			ft_putchar('*');
			nb_star_ligne[0]--;
		}
		nb_star_ligne[1] = nb_star_ligne[1] + 2;
		ligne--;
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	door(){

}

void	auxiliaire(int size, int flag, int *base)
{
	int beginning;
	int	micro_base;
	int	mem;

	mem = 1;
	*base = *base / 2;
	beginning = 1;
	while (size > 0)
	{
		if (flag == 0)
		{
			micro_base = level_count(mem, beginning);
		}
		else
		{
			micro_base = level_count(mem, beginning);
			level(mem, beginning, base);
		}
		mem++;
		beginning = micro_base + 6;
		size--;
		*base = *base + 2 ;
	}
	*base = micro_base;
}

void	sastantua(int size)
{
	if (size > 0)
	{
		int	base;

		base = 0;
		auxiliaire(size, 0, &base);
		printf("base: %d \n", base);
		auxiliaire(size, 1, &base);
	}
}

int		main()
{
	sastantua(6);
	return (0);
}
