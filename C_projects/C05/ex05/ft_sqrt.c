/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:36:00 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/20 19:31:00 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recur(int nb, int i)
{
	if (i * i == nb)
		return (i);
	if (i * i > nb)
		return (0);
	return (ft_sqrt_recur(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_sqrt_recur(nb, 1));
}
