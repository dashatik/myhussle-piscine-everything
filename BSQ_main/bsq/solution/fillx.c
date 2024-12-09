/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:15:36 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/24 18:49:08 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	fillx(t_matrix **matrix, t_max *potential)
{
	int	sr;
	int	sc;
	int	er;
	int	ec;

	sr = potential->sr;
	er = potential->er;
	ec = potential->ec;
	while (sr <= er)
	{
		sc = potential->sc;
		while (sc <= ec)
		{
			matrix[sr][sc].value = 'x';
			sc++;
		}
		sr++;
	}
}
