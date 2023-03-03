/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:21:52 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/18 10:22:17 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	rush(int row, int col, char *input);

int	argv_check(char *str)
{
	int	i;
	int	c1;
	int	c2;

	i = 0;
	c1 = 0;
	c2 = 0;
	if (str[0] <= '0' || str[0] >= '9')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] == ' '))
			if ((str[i + 2] >= '0' && str[i + 2] <= '9'))
				c1++;
		if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] == '\0'))
			c1++;
		i++;
	}
	if (c1 == 16)
		return (1);
	return (0);
}

int	**init_grid(int x, int y)
{
	int	**grid;
	int	i;
	int	j;

	i = 0;
	j = 0;
	grid = malloc (y * 8);
	while (i < y)
	{
		grid[i] = malloc (x * 4);
		while (j < x)
		{
			grid[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (grid);
}

void	placer(int **grid, int x, int y, int val)
{
	grid[y][x] = val;
}

void	display_grid(int **grid, int x, int y)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (i < y)
	{
		while (j < x)
		{
			temp = grid[i][j] + 48;
			write(1, &temp, 1);
			write(1, " ", 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rush(4, 4, argv[1]);
}
