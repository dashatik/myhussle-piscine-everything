/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:58:40 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/15 21:12:43 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	build_grid(int row_indices[4], int grid[4][4], int permutations[24][4]);
int		check_grid(int clues[16], int grid[4][4]);
extern int	g_grid[4][4];
extern int	g_clues[16];
extern int	g_permutations[24][4];

void	iterate_rows(int row_indices[4], int *found)
{
	row_indices[1] = 0;
	while (row_indices[1] < 24 && !(*found))
	{
		row_indices[2] = 0;
		while (row_indices[2] < 24 && !(*found))
		{
			row_indices[3] = 0;
			while (row_indices[3] < 24 && !(*found))
			{
				build_grid(row_indices, g_grid, g_permutations);
				if (check_grid(g_clues, g_grid))
				{
					*found = 1;
					return ;
				}
				row_indices[3]++;
			}
			row_indices[2]++;
		}
		row_indices[1]++;
	}
}

int	solve(void)
{
	int	row_indices[4];
	int	found;

	found = 0;
	row_indices[0] = 0;
	while (row_indices[0] < 24 && !found)
	{
		iterate_rows(row_indices, &found);
		row_indices[0]++;
	}
	return (found);
}
