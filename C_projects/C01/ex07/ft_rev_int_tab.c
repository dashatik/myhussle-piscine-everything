/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:26:42 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/09 14:22:07 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < (size / 2))
	{
		swap = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = swap;
		a++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	
	printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
	ft_rev_int_tab(tab, size);
	
	printf("\nReversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
	printf("\n");
	return 0;
}
*/