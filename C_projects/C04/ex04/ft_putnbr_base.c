/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:51:31 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/18 16:26:30 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_base_recurcive(unsigned int nbr, char *base, int base_len)
{
	if (nbr >= (unsigned int)base_len)
		ft_base_recurcive(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2 || !ft_check_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_base_recurcive((unsigned int)(-nbr), base, base_len);
	}
	else
	{
		ft_base_recurcive((unsigned)nbr, base, base_len);
	}
}
