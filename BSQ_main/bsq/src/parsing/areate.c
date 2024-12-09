/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   areate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:48:50 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 22:59:13 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

struct s_matrix	**areate(t_mapin4 *m_inf)
{
	int			i;
	t_matrix	**matrix;

	i = -1;
	matrix = (t_matrix **) malloc (m_inf->max_row * sizeof(t_matrix *));
	while (++i < m_inf->max_row)
		matrix[i] = (t_matrix *) malloc (m_inf->max_col * sizeof(t_matrix));
	if (matrix == NULL)
		return (NULL);
	return (matrix);
}
