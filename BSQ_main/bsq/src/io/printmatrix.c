/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printmatrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:33:10 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/24 19:38:57 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	printmatrix(t_matrix **matrix, t_mapin4 *m_inf)
{
	int	i;
	int	j;

	i = -1;
	while (++i < m_inf->max_row)
	{
		j = -1;
		while (++j < m_inf->max_col)
		{
			write(1, &matrix[i][j].value, 1);
		}
		write(1, "\n", 1);
	}
}
