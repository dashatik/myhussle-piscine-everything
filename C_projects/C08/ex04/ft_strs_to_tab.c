/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:59:27 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/26 15:59:29 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

void	free_memory(t_stock_str *new, int i)
{
	while (i > 0)
		free(new[--i].copy);
	free(new);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*new;
	int			i;

	i = 0;
	new = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!new)
		return (NULL);
	while (i < ac)
	{
		new[i].size = ft_strlen(av[i]);
		new[i].str = av[i];
		new[i].copy = ft_strdup(av[i]);
		if (!new[i].copy)
		{
			free_memory(new, i);
			return (NULL);
		}
		i++;
	}
	new[i].str = 0;
	return (new);
}
