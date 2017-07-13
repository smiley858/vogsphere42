/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:12:35 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 18:57:36 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	mem;
	char	*toreturn;
	char	*head;
	int		i;

	head = str;
	toreturn = head;
	i = 1;
	while (*head != 0)
	{
		printf("%d\n", i++);
		head++;
	}
	head--;
	while (str <= head)
	{
		printf("%c %c\n", *str, *head);
		mem = *head;
		*head = *str;
		*str = mem;
		head--;
		str++;
	}
	return (toreturn);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_strrev(argv[1]));
	return (0);
}
