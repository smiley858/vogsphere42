/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:48:12 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/11 17:17:13 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	float		guess[2];

	guess[0] = nb / 2;
	guess[1] = 0.5 * (guess[0] + (nb / guess[0]));
	if (guess[0] != guess[1])
	{
		while (guess[1] != guess[0])
		{
			printf("1 = %f \n", guess[1]);
			printf("0 = %f \n", guess[0]);
			guess[1] = 0.5 * (guess[0] + (nb / guess[0]));
			printf("\n");
			guess[0] = guess[1];
			guess[1] = 0.5 * (guess[0] + (nb / guess[0]));
		}
	}
	return (guess[0]);
}

int		main(void)
{
	printf("%d", ft_sqrt(2147483647));
	return (0);
}
