/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:46:29 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/16 15:12:31 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "Habibi";
	char	str2[] = "Habibi";
	char	str3[] = "Hab";
	char	str4[] = "Habb";

	printf("Compare str 1 : %d\n", ft_strcmp(str1, str2));
	printf("Compare str 2 : %d\n", ft_strcmp(str2, str3));
	printf("Compare str 3 : %d\n", ft_strcmp(str3, str1));
	printf("Compare str 4: %d\n", ft_strcmp(str4, str1));
	return 0;
}
