/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_input.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaraud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:38:35 by rbaraud           #+#    #+#             */
/*   Updated: 2017/07/23 16:48:16 by rbaraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_INPUT_H
# define FORMAT_INPUT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include "liblist.h"
# include "classics.h"

int		w_count(char *input, int type);
char	**ft_create_tab(char *str, char **tab, char *new_str);
char	**ft_split_carriage(char *str);
char	**list_to_input(int size, t_list **list_input);
char	**format_input(void);
#endif
