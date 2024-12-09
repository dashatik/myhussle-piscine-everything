/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_construction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:50:53 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/15 20:50:55 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	build_grid(int row_indices[4], int grid[4][4], int permutations[24][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = permutations[row_indices[i]][j];
			j++;
		}
		i++;
	}
}
