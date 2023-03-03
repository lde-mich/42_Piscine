/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:25:11 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/18 11:13:16 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		**ft_create_mat(int row, int col);
void	ft_free_mat(int **mat, int row);
void	ft_all_in_one(int *one, int *combs, int row);
void	ft_fill_mat(int **mat, int *values, int row, int col);
void	ft_next_comb2(int *comb, int row);
void	ft_print_mat(int **mat, int row, int col);
int		check(int **grid, char *str);
int		ft_check_col(int **mat, int col, int row);

void	rush(int row, int col, char *input)
{
	int	**mat;
	int	*comb;
	int	*values;
	int	end;

	end = 1;
	values = malloc(row * row * 4);
	comb = malloc(row * 4);
	comb[0] = 1;
	comb[1] = 1;
	comb[2] = 1;
	comb[3] = 1;
	mat = ft_create_mat(row, col);
}

void	rushv2(int row, int col, char *input)
{
	while (comb[0] != 24 || comb[1] != 24)
	{
		ft_all_in_one(values, comb, row);
		ft_fill_mat(mat, values, row, col);
		if (check(mat, input) && ft_check_col(mat, row, col))
		{
			ft_print_mat(mat, row, col);
			end = 0;
			break;
		}
		ft_next_comb2(comb, row);
	}
	if (end)
		printf("not found\n");
	free(values);
	free(comb);
	ft_free_mat(mat, row);
}
