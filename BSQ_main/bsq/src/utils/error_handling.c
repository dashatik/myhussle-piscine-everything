/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:58:44 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/25 23:33:02 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	check_invalid_characters(t_mapin4 *m_inf, struct s_matrix **matrix)
{
	int	r;
	int	c;

	r = 0;
	while (r < m_inf->max_row)
	{
		c = 0;
		while (c < m_inf->max_col)
		{
			if (matrix[r][c].value != m_inf->full &&
					matrix[r][c].value != m_inf->obstacle)
			{
				write(2, "map error: invalid map\n", 23);
				return (0);
			}
			c++;
		}
		r++;
	}
	return (1);
}

int	check_empty_map(t_mapin4 *m_inf)
{
	if (m_inf->max_row == 0 || m_inf->max_col == 0)
	{
		write(2, "map error: empty map\n", 21);
		return (0);
	}
	return (1);
}

int	check_only_obstacles(t_mapin4 *m_inf, struct s_matrix **matrix)
{
	int	r;
	int	c;
	int	obs;

	r = 0;
	obs = 0;
	while (r < m_inf->max_row)
	{
		c = 0;
		while (c < m_inf->max_col)
		{
			if (matrix[r][c].value == m_inf->obstacle)
				obs++;
			c++;
		}
		r++;
	}
	if (obs == m_inf->max_col * m_inf->max_row)
	{
		write(2, "map error: only obstacles\n", 26);
		return (0);
	}
	return (1);
}

int	validate_map(t_mapin4 *m_inf, struct s_matrix **matrix)
{
	if (!check_empty_map(m_inf))
		return (0);
	if (!check_invalid_characters(m_inf, matrix))
		return (0);
	if (!check_only_obstacles(m_inf, matrix))
		return (0);
	return (1);
}
