/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:26:09 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/25 21:54:38 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	utility(int ac, char **av);

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		utility(ac, &av[i]);
		write(1, "\n", 1);
		i++;
	}
}
