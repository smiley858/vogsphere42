/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 11:49:40 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 13:23:17 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <string.h>

#include "ft_strcmp.c"

int	main(void)
{
	printf("new: %d [empty strings]\n", ft_strcmp("", ""));
	printf("ori: %d\n", strcmp("", ""));
	printf("new: %d [hellb hella]\n", ft_strcmp("hellb", "hella"));
	printf("ori: %d\n", strcmp("hellb", "hella"));
	printf("new: %d [a c]\n", ft_strcmp("a", "c"));
	printf("ori: %d\n", strcmp("a", "c"));
	printf("new: %d [aboom bboom]\n", ft_strcmp("aboom", "bboomboomc"));
	printf("ori: %d\n", strcmp("aboom", "bboomboomc"));
}
