/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:05:23 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/11 15:34:36 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] != '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[10];
	ft_strcpy(dest, src);
	printf("String: %s\n", dest);
	return 0;
}
