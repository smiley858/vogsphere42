/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 22:02:22 by rbaraud           #+#    #+#             */
/*   Updated: 2017/07/22 22:02:36 by rbaraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLIST_H
# define LIBLIST_H
# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	char			data;
}				t_list;
t_list			*ft_create_elem(char data);
void			ft_list_clear(t_list **begin_list);
t_list			*ft_list_last(t_list *begin_list);
void			ft_list_push_back(t_list **begin_list, char data);
void			ft_list_push_front(t_list **begin_list, char data);
int				ft_list_size(t_list *begin_list);
void			ft_print_list(t_list *list);
#endif
