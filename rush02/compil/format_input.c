/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 21:56:18 by rbaraud           #+#    #+#             */
/*   Updated: 2017/07/23 16:47:37 by rbaraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "format_input.h"

int		w_count(char *input, int type)
{
	int	i;
	int	c_sum;
	int	w_sum;

	c_sum = 0;
	w_sum = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] != '\n')
			w_sum++;
		while (input[i] != '\n' && input[i])
		{
			c_sum++;
			i++;
		}
		if (input[i])
			i++;
	}
	if (type == 0)
		return (w_sum);
	else if (type == 1)
		return (c_sum);
	return (w_sum + c_sum);
}

char	**ft_create_tab(char *str, char **tab, char *new_str)
{
	int		i;
	int		i_tab;
	int		i_new;

	i = 0;
	i_tab = 0;
	i_new = 0;
	while (str[i])
	{
		if (str[i] != '\n' && str[i])
			tab[i_tab++] = &new_str[i_new];
		while (str[i] != '\n' && str[i])
			new_str[i_new++] = str[i++];
		if (str[i] == '\n' || !str[i])
			new_str[i_new++] = '\0';
		str[i] ? i++ : i;
	}
	new_str[i_new] = '\0';
	tab[i_tab] = NULL;
	return (tab);
}

char	**ft_split_carriage(char *str)
{
	char	**tab;
	char	*new_str;

	if (!(tab = (char **)malloc(sizeof(char *) * w_count(str, 0) + 1)))
		return (NULL);
	if (!(new_str = (char *)malloc(sizeof(char) * w_count(str, 2))))
	{
		free(tab);
		return (NULL);
	}
	return (ft_create_tab(str, tab, new_str));
}

char	**list_to_input(int size, t_list **list_input)
{
	char	*input;
	int		j;
	t_list	*temp_elem;

	input = (char *)malloc(sizeof(char) * size);
	if (!input)
	{
		ft_list_clear(list_input);
		return (NULL);
	}
	temp_elem = *list_input;
	j = 0;
	while (size > 0)
	{
		input[j] = temp_elem->data;
		temp_elem = temp_elem->next;
		j++;
		size--;
	}
	input[j] = '\0';
	ft_list_clear(list_input);
	return (ft_split_carriage(ft_strrev(input)));
}

char	**format_input(void)
{
	int		ret;
	char	buf[2];
	t_list	*list_input;
	t_list	*temp_elem;

	list_input = ft_create_elem('\0');
	while ((ret = read(0, buf, 1)))
	{
		buf[1] = '\0';
		ft_list_push_front(&list_input, buf[0]);
	}
	temp_elem = list_input;
	list_input = list_input->next;
	free(temp_elem);
	return (list_to_input(ft_list_size(list_input), &list_input));
}
