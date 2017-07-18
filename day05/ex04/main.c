/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 19:27:07 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/17 19:57:00 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex03/ft_strcpy.c"
#include "ex04/ft_strncpy.c"
// #include "ex19/ft_strlcpy.c"
#include "ex16/ft_strcat.c"
#include "ex17/ft_strncat.c"
#include "ex18/ft_strlcat.c"

int		main(int argc, char **argv)
{
	if (argc != 4)
		printf("usage: ./a.out \"string\" \"string\" int");
	else
	{
		char	1c1[300] = *argv[1]; // strlcpy
		char	1c2[300] = *argv[1]; // ft_strlcpy
		char	1c3[300] = *argv[1]; // strlcat
		char	1c4[300] = *argv[1]; // ft_strlcat
		char	1c5[300] = *argv[1]; // strncpy
		char	1c6[300] = *argv[1]; // ft_strncpy
		char	1c7[300] = *argv[1]; // strcpy
		char	1c8[300] = *argv[1]; // ft_strcpy
		char	1c9[300] = *argv[1]; // ft_strncat
		char	1c10[300] = *argv[1]; // strncat
		char	1c11[300] = *argv[1]; // strcat
		char	1c12[300] = *argv[1]; // ft_strcat

		char	2c1[300] = *argv[2]; // strlcpy
		char	2c2[300] = *argv[2]; // ft_strlcpy
		char	2c3[300] = *argv[2]; // strlcat
		char	2c4[300] = *argv[2]; // ft_strlcat
		char	2c5[300] = *argv[2]; // strncpy
		char	2c6[300] = *argv[2]; // ft_strncpy
		char	2c7[300] = *argv[2]; // strcpy
		char	2c8[300] = *argv[2]; // ft_strcpy
		char	2c9[300] = *argv[2]; // ft_strncat
		char	2c10[300] = *argv[2]; // strncat
		char	2c11[300] = *argv[2]; // strcat
		char	2c12[300] = *argv[2]; // ft_strcat

		int retour_strlcpy = strlcpy(1c1, 2c1, *argv[3] - 48);
		int retour_ftstrlcpy = ft_strlcpy(1c2, 2c2, *argv[3] - 48);
		int retour_strlcat = strlcat(1c3, 2c3, *argv[3] - 48);
		int retour_ftstrlcat = ft_strlcat(1c4, 2c4, *argv[3] - 48);

		printf("strlcpy: %s %d\n", 1c1, retour_strlcat);
		printf("ft_strlcpy: %s %d\n\n", 1c2, retour_strlcat);

		printf("strncpy: %s\n", strncpy(1c5, 2c5, *argv[3] - 48));
		printf("ft_strncpy: %s\n\n", strncpy(1c6, 2c6, *argv[3] - 48));

		printf("strcpy: %s\n", strcpy(1c7, 2c7));
		printf("ft_strcpy: %s\n\n", strcpy(1c8, 2c8));


		printf("strlcat: %s %d\n", 1c3, retour);
		printf("ft_strlcat: %s %d\n\n", 1c4, retour);

		printf("strncat: %s\n", strncat(1c10, 2c10, argv[3] - 48));
		printf("ft_strncat: %s\n\n", ft_strncat(1c9, 2c9, argv[3] - 48));

		printf("strcat: %s\n", strcat(1c11, 2c11));
		printf("ft_strcat: %s\n\n", ft_strcat(1c12. 2c12));
	}
	return(0);
}
