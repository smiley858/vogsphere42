/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 11:49:40 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 13:32:12 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <string.h>

#include "ft_strncmp.c"

int		main(void)
{
	printf("new: %d [empty strings]\n", ft_strncmp("", "", 0));
	printf("ori: %d\n", strncmp("", "", 0));
	printf("new: %d [hellb hella]\n", ft_strncmp("hellb", "hella", 5));
	printf("ori: %d\n", strncmp("hellb", "hella", 5));
	printf("new: %d [a c]\n", ft_strncmp("a", "c", 1));
	printf("ori: %d\n", strncmp("a", "c", 1));
	printf("new: %d [aboom bboomboomc]\n", ft_strncmp("aboom", "bboomboomc", 5));
	printf("ori: %d\n", strncmp("aboom", "bboomboomc", 5));
}
