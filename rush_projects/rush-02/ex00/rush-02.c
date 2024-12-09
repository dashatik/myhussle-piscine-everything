/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:33:59 by datikhom          #+#    #+#             */
/*   Updated: 2024/09/22 20:03:52 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

t_dict	*load_dictionary(char *filename)
{
	int		file;
	t_dict	*dict_entries;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	dict_entries = parse(file);
	if (!dict_entries)
	{
		write(1, "Dict Error\n", 11);
		close(file);
		return (NULL);
	}
	close(file);
	return (dict_entries);
}

int	main(int argc, char *argv[])
{
	t_dict	*dict_entries;
	char	*number;
	int i;

	i = 0;
	if (argc == 2 && is_num(argv[1]))
	{
		dict_entries = load_dictionary("numbers.dict");
		number = argv[1];
	}
	else if (argc == 3 && is_num(argv[2]))
	{
		dict_entries = load_dictionary(argv[1]);
		number = argv[2];
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!dict_entries)
		return (1);
	num_to_word(number, dict_entries);
	while (dict_entries[i].word)
	{
		printf("word %s\n", dict_entries[i].word);
		free(dict_entries[i].word);
		i++;
	}
	free(dict_entries);
	return (0);
}
