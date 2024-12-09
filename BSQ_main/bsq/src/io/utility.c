/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:06:56 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 23:33:39 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	utility(int ac, char **av)
{
	t_mapin4	m_inf;
	t_square	**square;
	t_matrix	**matrix;
	char		buffer[8000192];

	(void) ac;
	m_inf.filesize = o_ronly(buffer, *av, sizeof(buffer));
	if (m_inf.filesize <= 0)
	{
		write(2, "Error reading file.\n", 20);
		return (0);
	}
	mapinfo(&m_inf);
	r_c_cal(&m_inf, buffer);
	square = sqreate(&m_inf);
	matrix = areate(&m_inf);
	parsing(matrix, buffer, &m_inf);
	if (validate_map(&m_inf, matrix) == 1)
	{
		bsq42(square, matrix, &m_inf);
		printmatrix(matrix, &m_inf);
	}
	matrixfree(matrix, m_inf);
	squarefree(square, m_inf);
	return (0);
}
