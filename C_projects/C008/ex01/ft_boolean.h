/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:19:47 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/26 12:52:52 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#define TRUE 		1
#define FALSE	 	0
#define SUCCESS		0
#define EVEN(nbr)	(nuber % 2) == ? TRUE : FALSE
#define EVEN_MSG	"I have an even number of arguments."
#define ODD_MSG		"I have an odd number of arguments."

typedef int t_bool;

void	ft_putchar(char *str);

t_bool	ft_is_even(int nbr);
	

#endif