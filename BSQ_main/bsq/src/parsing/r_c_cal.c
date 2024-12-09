/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_c_cal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 22:29:14 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 21:58:28 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	update_row_count(t_mapin4 *m_inf, int *current_row_len,
						int *max_row_len)
{
	(m_inf->max_row)++;
	if (*current_row_len > *max_row_len)
	{
		*max_row_len = *current_row_len;
	}
	*current_row_len = 0;
}

void	handle_last_row(t_mapin4 *m_inf, int current_row_len, int *max_row_len)
{
	if (current_row_len > 0)
	{
		(m_inf->max_row)++;
		if (current_row_len > *max_row_len)
		{
			*max_row_len = current_row_len;
		}
	}
}

void	r_c_cal(t_mapin4 *m_inf, char *buffer)
{
	int	i;
	int	current_row_len;
	int	max_row_len;

	i = 0;
	current_row_len = 0;
	max_row_len = 0;
	while (buffer[i] != '\n' && i < m_inf->filesize)
		i++;
	i++;
	while (i < m_inf->filesize)
	{
		if (buffer[i] == '\n')
		{
			update_row_count(m_inf, &current_row_len, &max_row_len);
		}
		else
		{
			current_row_len++;
		}
		i++;
	}
	handle_last_row(m_inf, current_row_len, &max_row_len);
	m_inf->max_col = max_row_len;
}
