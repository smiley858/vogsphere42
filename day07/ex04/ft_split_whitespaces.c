/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 21:09:55 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/19 14:57:16 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int		word_count;

	word_count = 1;
	while (*str == ' ' || (*str <= 13 && *str >= 7))
		str++;
	while (*str != 0)
	{
		if ((*str == ' ' || (*str <= 13 && *str >= 7)) || *str == 0)
			word_count++;
		while (*str == ' ' || (*str <= 13 && *str >= 7))
			str++;
		if (*str != 0)
			str++;
	}
	return (word_count);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*mem;

	mem = dest;
	while ((*src != ' ') && (*src != 0) && !(*src <= 13 && *src >= 7))
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (mem);
}

int		find_next_word(char **str, char **word)
{
	int		word_size;

	while (**str == ' ' || (**str <= 13 && **str >= 7))
		(*str)++;
	word_size = 0;
	*word = *str;
	while ((**str != ' ') && (**str != 0) && !(**str <= 13 && **str >= 7))
	{
		word_size++;
		(*str)++;
	}
	return (word_size);
}

char	**ft_split_whitespaces(char *str)
{
	int		word_size;
	char	**to_return;
	char	*word;
	char	**mem;

	if (*str == 0)
		return (0);
	to_return = malloc(sizeof(char *) * (count_words(str) + 1));
	if (to_return == NULL)
		return (0);
	mem = to_return;
	while (*str != 0)
	{
		word_size = find_next_word(&str, &word);
		*to_return = malloc(sizeof(char) * (word_size + 1));
		if (*to_return == NULL)
			return (0);
		ft_strcpy(*to_return, word);
		to_return++;
	}
	*to_return = 0;
	return (mem);
}
