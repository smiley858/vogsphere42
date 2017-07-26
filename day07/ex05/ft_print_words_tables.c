/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 15:03:30 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/20 16:49:17 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		index;

	index = 0;
	while (tab[index] != 0)
	{
		ft_putstr(tab[index]);
		ft_putchar('\n');
		index++;
	}
}
