/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presol.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:05:17 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/24 19:48:29 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	fillone(t_square **square, t_matrix **matrix, t_mapin4 *m_inf)
{
	int	r;
	int	c;

	r = 0;
	c = 0;
	while (c < m_inf->max_col)
	{
		if (matrix[0][c].value != 'o')
			square[0][c].value = 1;
		c++;
	}
	while (r < m_inf->max_row)
	{
		if (matrix[0][r].value != 'o')
			square[r][0].value = 1;
		r++;
	}
}

void	fillzero(t_square **square, t_matrix **matrix, t_mapin4 *m_inf)
{
	int	r;
	int	c;

	r = 0;
	while (r < m_inf->max_row)
	{
		c = 0;
		while (c < m_inf->max_col)
		{
			if (matrix[r][c].value == 'o')
				square[r][c].value = 0;
			else if (matrix[r][c].value != 'o' && square[r][c].value != 1)
				square[r][c].value = '-';
			c++;
		}
		r++;
	}
}

void	presol(t_square **square, t_matrix **matrix, t_mapin4 *m_inf)
{
	fillone(square, matrix, m_inf);
	fillzero(square, matrix, m_inf);
}
