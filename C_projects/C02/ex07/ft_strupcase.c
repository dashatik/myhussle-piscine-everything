/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:48:05 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/10 17:21:24 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "habibi";
	char str2[] = "123habiBI";
	char str3[] = "HABIBI";

	printf("string 1 : %s\n", ft_strupcase(str1));
	printf("string 2 : %s\n", ft_strupcase(str2));
	printf("string 3 : %s\n", ft_strupcase(str3));
	return 0;
}
*/