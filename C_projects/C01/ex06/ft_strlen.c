/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:39:15 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/11 21:24:22 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

#include <stdio.h>
//#include <string.h>

int main(void)
{
	printf("%d\n", ft_strlen("Trarararhgghghghghghghghghghghghghgghghghghghghghghghghg"));
	printf("%d\n", ft_strlen("ahiahaiah\n"));
}

