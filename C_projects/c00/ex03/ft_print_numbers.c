/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:36:16 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/05 23:00:18 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count >= 48 && count <= 57)
	{
		write(1, &count, 1);
		count ++;
	}
}
/*
int main(void)
{
    ft_print_numbers();
    write(1, "\n", 1);
    return(0);
}
*/