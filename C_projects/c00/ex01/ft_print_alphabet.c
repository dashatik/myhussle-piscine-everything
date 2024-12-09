/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:52:26 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/05 22:58:32 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a >= 97 && a <= 122)
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int main(void)
{
    ft_print_alphabet();
    write(1, "\n", 1);
    return 0;
}
*/