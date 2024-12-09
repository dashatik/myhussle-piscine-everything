/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:26:17 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/24 17:52:15 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	validcheck(t_max *potential, t_square **square)
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
			if (square[sr][sc].value == 0)
				return (0);
			sc++;
		}
		sr++;
	}
	return (1);
}
