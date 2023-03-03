/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:17:57 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/18 10:18:55 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init(int *i, int *j, int *controll, int *final_counter);
void	increment(int *i, int *j, int *counter, int *step);
void	init_rev(int *i, int *j, int *controll, int *final_counter);

int	is_solution_l(int **grid, char *str, int counter, int step)
{
	int	i;
	int	j;
	int	final_counter;
	int	controll;

	init(&i, &j, &controll, &final_counter);
	while (i < 4)
	{
		while (j < 4)
		{
			if (grid[i][controll] < grid[i][j])
			{
				counter++;
				controll = j;
			}
			j++;
		}
		if (counter == str[step] - 48)
			final_counter++;
		increment(&i, &j, &counter, &step);
		controll = 0;
	}
	if (final_counter == 4)
		return (1);
	return (0);
}

int	is_solution_t(int **grid, char *str, int counter, int step)
{
	int	i;
	int	j;
	int	final_counter;
	int	controll;

	init(&i, &j, &controll, &final_counter);
	while (i < 4)
	{
		while (j < 4)
		{
			if (grid[controll][i] < grid[j][i])
			{
				counter++;
				controll = j;
			}
			j++;
		}
		if (counter == str[step] - 48)
			final_counter++;
		controll = 0;
		increment(&i, &j, &counter, &step);
	}
	if (final_counter == 4)
		return (1);
	return (0);
}

int	is_solution_b(int **grid, char *str, int counter, int step)
{
	int	i;
	int	j;
	int	final_counter;
	int	controll;

	init_rev(&i, &j, &controll, &final_counter);
	while (i < 4)
	{
		while (j < 4)
		{
			if (grid[controll][i] < grid[3 - j][i])
			{
				counter++;
				controll = 3 - j;
			}
			j++;
		}
		if (counter == str[step] - 48)
			final_counter++;
		controll = 3;
		increment(&i, &j, &counter, &step);
	}
	if (final_counter == 4)
		return (1);
	return (0);
}

int	is_solution_r(int **grid, char *str, int counter, int step)
{
	int	i;
	int	j;
	int	final_counter;
	int	controll;

	init_rev(&i, &j, &controll, &final_counter);
	while (i < 4)
	{
		while (j < 4)
		{
			if (grid[i][controll] < grid[i][3 - j])
			{
				counter++;
				controll = 3 - j;
			}
			j++;
		}
		if (counter == str[step] - 48)
			final_counter++;
		controll = 3;
		increment(&i, &j, &counter, &step);
	}
	if (final_counter == 4)
		return (1);
	return (0);
}

int	check(int **grid, char *str)
{
	if (is_solution_b(grid, str, 1, 8) && is_solution_r(grid, str, 1, 24))
		if (is_solution_t(grid, str, 1, 0) && is_solution_l(grid, str, 1, 16))
			return (1);
	return (0);
}
