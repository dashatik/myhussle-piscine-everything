/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:07:39 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/10 17:24:34 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "HABIBI";
	char str2[] = "habiBI";
	char str3[] = "123&&&HABi";
	
	printf("string 1 : %s\n", ft_strlowcase(str1));
	printf("string 2 : %s\n", ft_strlowcase(str2));
	printf("string 3 : %s\n", ft_strlowcase(str3));
	return 0;
}
*/