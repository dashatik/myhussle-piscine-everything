/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:35:30 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/10 17:24:13 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	char str1[] = "HABIBI";
	char str2[] = "habibi";
	char str3[] = "HABIBI12";
	char str4[] = "123";
	char str5[] = "";

	printf("string 1 : %d\n", ft_str_is_uppercase(str1));
	printf("string 2 : %d\n", ft_str_is_uppercase(str2));
	printf("string 3 : %d\n", ft_str_is_uppercase(str3));
	printf("string 4 : %d\n", ft_str_is_uppercase(str4));
	printf("string 5 : %d\n", ft_str_is_uppercase(str5));
	return 0;
}
*/