/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erosende <erosende@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:25:18 by erosende          #+#    #+#             */
/*   Updated: 2024/09/08 18:13:42 by erosende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	error(void)
{
	char	*error;
	int		i;

	i = 0;
	error = "Error: Invalid value\n";
	while (error[i] != '\0')
	{
		ft_putchar(error[i]);
		i++;
	}
}

void	print_char(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == 0 && j == x - 1)
		|| (i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))
		ft_putchar('o');
	else if (i == 0 || i == y - 1)
		ft_putchar('-');
	else if (j == 0 || j == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		error();
		return ;
	}
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
			print_char(i, j++, x, y);
		ft_putchar('\n');
		i++;
	}
}
