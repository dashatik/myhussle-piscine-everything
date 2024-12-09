/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:16:22 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/10 17:22:46 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "Habibi123";
	char str2[] = "1234";
	char str3[] = "";

	printf("string : %d\n", ft_str_is_numeric(str1));
	printf("string : %d\n", ft_str_is_numeric(str2));
	printf("string : %d\n", ft_str_is_numeric(str3));
	return 0;
}
*/