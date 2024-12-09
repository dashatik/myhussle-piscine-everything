/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:57:13 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/15 18:18:02 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	save_permutation(int permutations[24][4],
						int current_perm[4], int *index)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		permutations[*index][i] = current_perm[i];
		i++;
	}
	(*index)++;
}

void	generate_one_permutation(int numbers[4], int indices[4],
								int permutations[24][4], int *index)
{
	int	current_perm[4];

	if (indices[0] != indices[1]
		&& indices[0] != indices[2]
		&& indices[0] != indices[3]
		&& indices[1] != indices[2]
		&& indices[1] != indices[3]
		&& indices[2] != indices[3])
	{
		current_perm[0] = numbers[indices[0]];
		current_perm[1] = numbers[indices[1]];
		current_perm[2] = numbers[indices[2]];
		current_perm[3] = numbers[indices[3]];
		save_permutation(permutations, current_perm, index);
	}
}

void	iterate_indices(int numbers[4], int indices[4],
					int permutations[24][4], int *index)
{
	indices[1] = 0;
	while (indices[1] < 4)
	{
		indices[2] = 0;
		while (indices[2] < 4)
		{
			indices[3] = 0;
			while (indices[3] < 4)
			{
				generate_one_permutation(
					numbers,
					indices,
					permutations,
					index
					);
				indices[3]++;
			}
			indices[2]++;
		}
		indices[1]++;
	}
}

void	generate_permutations(int permutations[24][4])
{
	int	index;
	int	numbers[4];
	int	indices[4];

	index = 0;
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	indices[0] = 0;
	while (indices[0] < 4)
	{
		iterate_indices(numbers, indices, permutations, &index);
		indices[0]++;
	}
}

/* void	generate_permutations(int permutations[24][4])
{
	int	index;
	int	numbers[4] = {1, 2, 3, 4};
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	index = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (j != i)
			{
				k = 0;
				while (k < 4)
				{
					if (k != i && k != j)
					{
						l = 0;
						while (l < 4)
						{
							if (l != i && l != j && l != k)
							{
								int	current_perm[4] = {numbers[i], numbers[j], numbers[k], numbers[l]};
								save_permutation(permutations, current_perm, &index);
							}
							l++;
						}
					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
}
 */