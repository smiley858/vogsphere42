/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:21:31 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/12 21:41:02 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*mem;

	mem = dest;
	while (n > 0)
	{
		if (*src == 0)
			*dest = 0;
		else
		{
			*dest = *src;
			src++;
		}
		dest++;
		n--;
	}
	return (mem);
}
