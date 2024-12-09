/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqreate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:48:50 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 22:59:33 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

struct s_square	**sqreate(t_mapin4 *m_inf)
{
	int			i;
	t_square	**square;

	i = -1;
	square = (t_square **) malloc (m_inf->max_row * sizeof(t_square *));
	while (++i < m_inf->max_row)
		square[i] = (t_square *) malloc (m_inf->max_col * sizeof(t_square));
	if (square == NULL)
		return (NULL);
	return (square);
}
