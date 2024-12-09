/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:03:38 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/24 18:41:32 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	min(t_square **square, int r, int c)
{
	int	min;
	int	first;
	int	second;
	int	third;

	first = square[r][c - 1].value;
	second = square[r - 1][c].value;
	third = square[r - 1][c - 1].value;
	min = 2147483647;
	if (first < min)
		min = first;
	if (second < min)
		min = second;
	if (third < min)
		min = third;
	return (min);
}
