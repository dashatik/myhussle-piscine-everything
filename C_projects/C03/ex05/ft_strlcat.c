/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:22:45 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/16 15:18:49 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	space;

	src_len = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	space = size - dest_len - 1;
	i = 0;
	while (src[i] != '\0' && i < space)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
int main(void)
{
	char dest[30] = "Habibi come to dubai,";
	char src[] = " it's going to be super fun, we go ice-cream and kebab";
	unsigned int size = 100;
	
	unsigned int result = ft_strlcat(dest, src, size);
	printf("String together: %s\n", dest);
	printf("Created str: %u\n", result);
	return 0;
}
