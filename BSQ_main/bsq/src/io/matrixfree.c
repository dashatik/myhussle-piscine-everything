/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:38:11 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 00:41:55 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	matrixfree(t_matrix **matrix, t_mapin4 m_inf)
{
	int	i;

	i = -1;
	while (++i < m_inf.max_row)
		free(matrix[i]);
	free(matrix);
	matrix = NULL;
}
