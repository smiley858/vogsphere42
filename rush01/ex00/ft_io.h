/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguthaus <pguthaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 04:52:24 by pguthaus          #+#    #+#             */
/*   Updated: 2017/07/16 16:47:51 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H
# include <unistd.h>

void	ft_putstr(char *str, char point);

void	display_sudoku(char **sudoku);

int		ft_strlen(char *str);
#endif
