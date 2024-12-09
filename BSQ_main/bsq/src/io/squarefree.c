/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squarefree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:42:21 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 00:17:29 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	squarefree(t_square **square, t_mapin4	m_inf)
{
	int	i;

	i = -1;
	while (++i < m_inf.max_row)
		free(square[i]);
	free(square);
	square = NULL;
}
