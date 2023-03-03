/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:22:33 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/18 10:23:16 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_create_mat(int row, int col)
{
	int	**mat;
	int	i;

	i = 0;
	mat = malloc(col * 8);
	while (i < col)
	{
		mat[i] = malloc(row * 4);
		i++;
	}
	return (mat);
}

void	ft_fill_mat(int **mat, int *values, int row, int col)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			mat[i][j] = values[x];
			j++;
			x++;
		}
		i++;
	}
}

void	ft_free_mat(int **mat, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}
