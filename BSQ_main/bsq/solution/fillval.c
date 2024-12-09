/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillval.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:59:25 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/24 23:29:53 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	fillval(t_square **square, t_mapin4 *m_inf)
{
	int	r;
	int	c;

	r = 1;
	while (r < m_inf->max_row)
	{
		c = 1;
		while (c < m_inf->max_col)
		{
			if (square[r][c].value != 0)
				square[r][c].value = min(square, r, c) + 1;
			if (m_inf->max_value < square[r][c].value)
			{
				m_inf->max_value = square[r][c].value;
				m_inf->max_num += 1;
			}
			c++;
		}
		r++;
	}
}
