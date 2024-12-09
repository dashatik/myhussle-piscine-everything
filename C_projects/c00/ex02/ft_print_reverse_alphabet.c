/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:33:37 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/05 22:59:27 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 122;
	while (z <= 122 && z >= 97)
	{
		write(1, &z, 1);
		--z;
	}	
}

/*
int main(void)
{
    ft_print_reverse_alphabet();
        write(1, "\n", 1);
    return 0;
}
*/