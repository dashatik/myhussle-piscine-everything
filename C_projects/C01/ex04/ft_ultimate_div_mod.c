/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:47:21 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/10 15:11:42 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	modulus;

	div = *a;
	modulus = *b;
	*a = div / modulus;
	*b = div % modulus;
}

#include <stdio.h>
int	main(void)
{
	int a;
	int b;

	a = 7;
	b = 4;
	
	ft_ultimate_div_mod(&a, &b);
	printf("a : %d, b : %d\n", a, b);
}
