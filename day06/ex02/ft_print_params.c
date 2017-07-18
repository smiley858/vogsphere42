/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:07:39 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 11:09:47 by gchojnac         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int	index;

	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
