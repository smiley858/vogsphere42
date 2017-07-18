/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 18:18:26 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/18 00:10:19 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int size_dest;
	int size_src;
	int limit;

	size_dest = 0;
	size_src = 0;
	limit = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (src[size_src] != '\0' && limit < nb)
	{
		dest[size_dest + size_src] = src[size_src];
		size_src++;
		limit++;
	}
	while (limit < nb)
	{
		dest[size_dest + size_src] = '\0';
		limit++;
	}
	dest[size_dest + size_src + 1] = '\0';
	return (dest);
}
