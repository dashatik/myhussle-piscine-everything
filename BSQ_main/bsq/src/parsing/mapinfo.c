/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapinfo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:15:54 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 21:58:53 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	mapinfo(t_mapin4 *m_inf)
{
	m_inf->max_row = 0;
	m_inf->max_col = 0;
	m_inf->max_value = 0;
	m_inf->max_num = 0;
	m_inf->empty = ' ';
	m_inf->obstacle = 'o';
	m_inf->full = '.';
}
