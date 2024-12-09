/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:34:07 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/20 19:31:09 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	while (power == 0)
	{
		return (1);
	}
	while (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		j = j * nb;
		i++;
	}
	return (j);
}
