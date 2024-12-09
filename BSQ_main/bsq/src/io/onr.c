/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 23:15:32 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/23 22:24:30 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	o_ronly(char *buffer, char *filename, int buffer_size)
{
	int	file;
	int	filesize;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	filesize = read(file, buffer, buffer_size);
	if (filesize <= 0)
	{
		close(file);
		return (0);
	}
	close(file);
	return (filesize);
}
