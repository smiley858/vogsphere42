/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 09:40:46 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/22 12:01:48 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);

int		ft_putstr_file(int fd, char *str)
{
	return (write(fd, str, ft_strlen(str)));
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
