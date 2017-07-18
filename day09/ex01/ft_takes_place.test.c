/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:25:46 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/13 19:46:51 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	display(int hour)
{
	int	pm;

	pm = 0;
	if (hour == 12)
		printf("12.00 P.M.");
	else if (hour == 0)
		printf("12.00 A.M.");
	else
	{
		if (hour >= 13)
		{
			hour = hour - 12;
			pm = 1;
		}
		(pm == 1) ? printf("%d.00 P.M.", hour) : printf("%d.00 A.M.", hour);
	}
}

void	ft_takes_place(int hour)
{
	int		beginning;
	int		ending;

	beginning = hour;
	ending = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	display(beginning);
	printf(" AND ");
	display(ending);
	printf("\n");
}

int		main(void)
{
	ft_takes_place(12);
	return (0);
}
