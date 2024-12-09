/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrupd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:37:08 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/24 23:30:07 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	sqrupd(t_max *potential, t_square **square, t_mapin4 *m_inf)
{
	int	r;
	int	c;

	r = 1;
	while (r < m_inf->max_row)
	{
		c = 1;
		while (c < m_inf->max_col)
		{
			if (square[r][c].value == m_inf->max_value)
			{
				potential->er = r;
				potential->ec = c;
				potential->sr = (r - m_inf->max_value + 1);
				potential->sc = (c - m_inf->max_value + 1);
				potential++;
			}
			c++;
		}
		r++;
	}
}	
