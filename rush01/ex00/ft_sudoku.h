/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguthaus <pguthaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 04:52:32 by pguthaus          #+#    #+#             */
/*   Updated: 2017/07/16 17:56:22 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H
# define EMPTY_CHAR '.'
# include "ft_valid.h"
# include "ft_io.h"

char	resolve(char **sudoku, int row, int col);
char	resolve_aux(char **sudoku, int row, int col);

#endif
