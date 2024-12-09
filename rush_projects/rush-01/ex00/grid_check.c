/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:50:00 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/15 20:02:47 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_unique(int row[4])
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i < 4)
	{
		sum += row[i];
		i++;
	}
	return (sum == 10);
}

int	count_visible_boxes(int row[4])
{
	int	visible;
	int	tallest;
	int	i;

	visible = 1;
	tallest = row[0];
	i = 1;
	while (i < 4)
	{
		if (row[i] > tallest)
		{
			visible++;
			tallest = row[i];
		}
		i++;
	}
	return (visible);
}

int	check_row(int left_clue, int right_clue, int row[4])
{
	int	reversed_row[4];
	int	i;

	if (!is_unique(row))
		return (0);
	if (count_visible_boxes(row) != left_clue)
		return (0);
	i = 0;
	while (i < 4)
	{
		reversed_row[i] = row[3 - i];
		i++;
	}
	if (count_visible_boxes(reversed_row) != right_clue)
		return (0);
	return (1);
}

int	check_grid(int clues[16], int grid[4][4])
{
	int	i;
	int	col[4];
	int	j;

	i = 0;
	while (i < 4)
	{
		if (!check_row(clues[i + 8], clues[i + 12], grid[i]))
			return (0);
		j = 0;
		while (j < 4)
		{
			col[j] = grid[j][i];
			j++;
		}
		if (!check_row(clues[i], clues[i + 4], col))
			return (0);
		i++;
	}
	return (1);
}
