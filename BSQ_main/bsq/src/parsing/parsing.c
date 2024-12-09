/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:25:32 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 21:57:46 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	parsing(t_matrix **matrix, char *buffer, t_mapin4 *m_inf)
{
	int	i;
	int	j;

	i = -1;
	while (*buffer != '\n')
		buffer++;
	buffer++;
	while (++i < m_inf->max_row && *buffer)
	{
		j = -1;
		while (++j < m_inf->max_col && *buffer)
		{
			if (*buffer == '\n')
				buffer++;
			matrix[i][j].value = *buffer;
			matrix[i][j].row = i;
			matrix[i][j].col = j;
			buffer++;
		}
	}
}
