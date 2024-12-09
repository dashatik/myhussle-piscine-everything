/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq42.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:05 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 20:30:52 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"
#include <stdio.h>

void	bsq42(t_square **square, t_matrix **matrix, t_mapin4 *m_inf)
{
	long	i;
	t_max	*potential;

	i = 0;
	presol(square, matrix, m_inf);
	fillval(square, m_inf);
	potential = (t_max *)malloc(m_inf->max_num * sizeof(t_max));
	sqrupd(potential, square, m_inf);
	while (i < m_inf->max_num)
	{
		if (validcheck(&potential[i], square) == 1)
			break ;
		i++;
	}
	fillx(matrix, &potential[i]);
	free(potential);
}
