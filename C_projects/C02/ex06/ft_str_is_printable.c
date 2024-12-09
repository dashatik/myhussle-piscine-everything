/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:48:23 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/10 17:24:22 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
		return (1);
	if (str[i] != '\0')
	{
		if (str[i] > 32 || str[i] < 126)
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
	char str1[] = "Habibi\0";
	char str2[] = "Habibi\nhh";
	char str3[] = "";

	printf("string 1 : %d\n", ft_str_is_printable(str1));
	printf("string 2 : %d\n", ft_str_is_printable(str2));
	printf("string 3 : %d\n", ft_str_is_printable(str3));
	
}
*/