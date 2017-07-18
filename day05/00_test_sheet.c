/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_test_sheet.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 19:27:07 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 00:03:09 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex03/ft_strcpy.c"
#include "ex04/ft_strncpy.c"
//#include "ex19/ft_strlcpy.c"
#include "ex16/ft_strcat.c"
#include "ex17/ft_strncat.c"
#include "ex18/ft_strlcat.c"

int		main(int argc, char **argv)
{
	if (argc != 4)
		printf("usage: ./a.out \"string\" \"string\" int");
	else
	{
		char	*c1c1 = strdup(argv[1]); // strlcpy
//		char	*c1c2 = strdup(argv[1]); // ft_strlcpy
		char	*c1c3 = strdup(argv[1]); // strlcat
		char	*c1c4 = strdup(argv[1]); // ft_strlcat
		char	*c1c5 = strdup(argv[1]); // strncpy
		char	*c1c6 = strdup(argv[1]); // ft_strncpy
		char	*c1c7 = strdup(argv[1]); // strcpy
		char	*c1c8 = strdup(argv[1]); // ft_strcpy
		char	*c1c9 = strdup(argv[1]); // ft_strncat
		char	*c1c10 = strdup(argv[1]); // strncat
		char	*c1c11 = strdup(argv[1]); // strcat
		char	*c1c12 = strdup(argv[1]); // ft_strcat

		char	*c2c1 = strdup(argv[2]); // strlcpy
//		char	*c2c2 = strdup(argv[2]); // ft_strlcpy
		char	*c2c3 = strdup(argv[2]); // strlcat
		char	*c2c4 = strdup(argv[2]); // ft_strlcat
		char	*c2c5 = strdup(argv[2]); // strncpy
		char	*c2c6 = strdup(argv[2]); // ft_strncpy
		char	*c2c7 = strdup(argv[2]); // strcpy
		char	*c2c8 = strdup(argv[2]); // ft_strcpy
		char	*c2c9 = strdup(argv[2]); // ft_strncat
		char	*c2c10 = strdup(argv[2]); // strncat
		char	*c2c11 = strdup(argv[2]); // strcat
		char	*c2c12 = strdup(argv[2]); // ft_strcat

		int retour_strlcpy = strlcpy(c1c1, c2c1, *argv[3] - 48);
//		int retour_ftstrlcpy = ft_strlcpy(c1c2, c2c2, *argv[3] - 48);
		int retour_strlcat = strlcat(c1c3, c2c3, *argv[3] - 48);
		int retour_ftstrlcat = ft_strlcat(c1c4, c2c4, *argv[3] - 48);

		printf("\nstrlcpy: %s %d\n", c1c1, retour_strlcpy);
//		printf("ft_strlcpy: %s %d\n", c1c2, retour_ftstrlcpy);

		printf("\nstrncpy: %s\n", strncpy(c1c5, c2c5, *argv[3] - 48));
		printf("ft_strncpy: %s\n", ft_strncpy(c1c6, c2c6, *argv[3] - 48));

		printf("\nstrcpy: %s\n", strcpy(c1c7, c2c7));
		printf("ft_strcpy: %s\n\n", ft_strcpy(c1c8, c2c8));


		printf("\nstrlcat: %s %d\n", c1c3, retour_strlcat);
		printf("ft_strlcat: %s %d\n", c1c4, retour_ftstrlcat);

		printf("\nstrncat: %s %d\n", strncat(c1c10, c2c10, *argv[3] - '0'), *argv[3] - 48);
		printf("ft_strncat: %s %d\n", ft_strncat(c1c9, c2c9, *argv[3] - '0'), *argv[3] - 48);

		printf("\nstrcat: %s\n", strcat(c1c11, c2c11));
		printf("ft_strcat: %s\n", ft_strcat(c1c12, c2c12));
	}
	return(0);
}
