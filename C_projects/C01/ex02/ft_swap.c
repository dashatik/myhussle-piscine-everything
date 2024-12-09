/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:42:47 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/08 19:37:17 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int b;
	int *ptra;
	int *ptrb;

	a = 1;
	b = 2;

	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d\n", a, b);
	return 0;
}
*/