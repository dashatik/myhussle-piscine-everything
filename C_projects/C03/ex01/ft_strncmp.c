/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:30:40 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/19 15:12:37 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "Hello123";
	char	str2[] = "";
	char	str3[] = "Hellz111111111";

	printf("Str 1: %d\n", ft_strncmp(str1, str2, 3));
	printf("Str 2: %d\n", ft_strncmp(str1, str3, 15));
	printf("Str 3: %d\n", ft_strncmp(str2, str3, 10));
	return 0;
}
