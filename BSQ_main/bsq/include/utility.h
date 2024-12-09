/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:53:11 by caonguye          #+#    #+#             */
/*   Updated: 2024/09/25 20:12:33 by datikhom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  UTILITY_H
# define UTILITY_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_matrix
{
	char	value;
	int		row;
	int		col;
}	t_matrix;

typedef struct s_square
{
	int	value;
	int	row;
	int	column;
}	t_square;

typedef struct s_mapin4
{
	int		filesize;
	int		max_row;
	int		max_col;
	int		max_value;
	int		max_num;
	char	empty;
	char	obstacle;
	char	full;
}	t_mapin4;

typedef struct s_max
{
	int	sr;
	int	sc;
	int	er;
	int	ec;
}	t_max;

//Input- output
int			o_ronly(char *buffer, char *filename, int buffer_size);
int			utility(int ac, char **av);
void		printmatrix(t_matrix **matrix, t_mapin4 *m_inf);
void		matrixfree(t_matrix **matrix, t_mapin4 m_inf);
void		squarefree(t_square **square, t_mapin4	m_inf);

//Parsing
void		r_c_cal(t_mapin4 *m_inf, char *buffer);
void		parsing(t_matrix **matrix, char *buffer, t_mapin4 *m_inf);
void		mapinfo(t_mapin4 *m_inf);
t_matrix	**areate(t_mapin4 *m_inf);
t_square	**sqreate(t_mapin4 *m_inf);

//Solution
void		bsq42(t_square **square, t_matrix **matrix, t_mapin4 *m_inf);
void		presol(t_square **square, t_matrix **matrix, t_mapin4 *m_inf);
void		fillzero(t_square **square, t_matrix **matrix, t_mapin4 *m_inf);
int			min(t_square **square, int r, int c);
void		fillval(t_square **square, t_mapin4 *m_inf);
void		sqrupd(t_max *potential, t_square **square, t_mapin4 *m_inf);
int			validcheck(t_max *potential, t_square **square);
void		fillx(t_matrix **matrix, t_max *potential);

//Error-handling
int			validate_map(t_mapin4 *m_inf, struct s_matrix **matrix);

#endif
