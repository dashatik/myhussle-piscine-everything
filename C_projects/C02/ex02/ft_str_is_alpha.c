/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:37:03 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/10 17:23:42 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| str[i] >= 'a' && str[i] <= 'z'))
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
	char str1[] = "Habibi";
	char str2[] = "Habibi0";
	char str3[] = "";

	printf("str1 : %d\n", ft_str_is_alpha(str1));
	printf("str2 : %d\n", ft_str_is_alpha(str2));
	printf("str3 : %d\n", ft_str_is_alpha(str3));
	return 0;
}
*/