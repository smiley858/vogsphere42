/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguthaus <pguthaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 04:52:47 by pguthaus          #+#    #+#             */
/*   Updated: 2017/07/16 14:04:34 by pguthaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VALID_H
# define FT_VALID_H

# include "ft_io.h"

char	is_col_free(char **sudoku, char nb, int row);

char	is_row_free(char **sudoku, char nb, int col);

char	is_block_free(char **sudoku, char nb, int start_x, int start_y);

#endif
