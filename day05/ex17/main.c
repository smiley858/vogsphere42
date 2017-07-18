/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:09:20 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 20:55:26 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

#include "ft_strncat.c"

int		main(int argc, char **argv)
{
	if (argc != 3)
		printf("usage: ./a.out \"string\" \"string\"\n");
	else
	{
		int retour1 = ft_strncat(argv[1], argv[2], argv[3]);
		int retour2 = strlcat(argv[1], argv[2], argv[3]);
		printf("strlcat: %s     %d\n",argv[1], retour2);
		printf("moi:     %s     %d\n",argv[1], retour1));
	}
	return (0);
}
