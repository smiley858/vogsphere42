/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <gchojnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:12:35 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 18:58:57 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	mem;
	char	*toreturn;
	char	*head;

	head = str;
	toreturn = head;
	while (*head != 0)
	{
		head++;
	}
	head--;
	while (str <= head)
	{
		mem = *head;
		*head = *str;
		*str = mem;
		head--;
		str++;
	}
	return (toreturn);
}
