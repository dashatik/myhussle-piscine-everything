/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:58:54 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/15 21:13:39 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize_grid(int grid[4][4]);
void	generate_permutations(int permutations[24][4]);
int		solve(void);
int		g_grid[4][4];
int		g_clues[16];
int		g_permutations[24][4];

void	print_grid(int grid[4][4])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	parse_input(char *str, int clues[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			clues[j++] = str[i] - '0';
			i++;
		}
		else if (str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (j == 16);
}

int	main(int argc, char **argv)
{
	if (argc != 2 || !parse_input(argv[1], g_clues))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	initialize_grid(g_grid);
	generate_permutations(g_permutations);
	if (solve())
		print_grid(g_grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
