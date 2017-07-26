/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sheet_rush03.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 16:24:48 by gchojnac          #+#    #+#             */
/*   Updated: 2017/07/23 23:28:32 by gchojnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_SHEET_RUSH03_H
# define TEST_SHEET_RUSH03_H

int		first_line(char **tab, int x);

int		last_line(char **tab, int x, int y);

int		middle(char **tab, int x, int y);

int		others(char **tab, int x, int y);

int		is_rush00(char **tab, int x, int y);

#endif
