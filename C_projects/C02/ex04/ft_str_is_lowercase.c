/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:25:26 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/10 17:22:55 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "habibi";
	char str2[] = "Habibi";
	char str3[] = "";
	char str4[] = "123habibi";

	printf("string : %d\n", ft_str_is_lowercase(str1));
	printf("string : %d\n", ft_str_is_lowercase(str2));
	printf("string : %d\n", ft_str_is_lowercase(str3));
	printf("string : %d\n", ft_str_is_lowercase(str4));
	return 0;
}
*/