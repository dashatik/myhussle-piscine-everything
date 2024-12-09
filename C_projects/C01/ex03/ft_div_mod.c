/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:53:38 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/09 21:08:27 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 7;
	b = 4;

	ft_div_mod(a, b, &div, &mod);
	
	printf("div : %d, mod : %d\n", div, mod);
	
}
