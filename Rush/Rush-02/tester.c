/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaterno <mpaterno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:19:56 by mpaterno          #+#    #+#             */
/*   Updated: 2022/09/25 17:08:56 by mpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	not_3_number2(char **arr, char *nbr)
{
	int		i;
	char	*str1;
	char	*str2;
	int		index;

	index = -1;
	i = -1;
	if (ft_strlen(nbr) % 3 == 2)
	{
		str1 = malloc(3);
		str2 = malloc(ft_strlen(nbr) - 1);
		while (++i < 2)
			str1[i] = nbr[i];
		str1[i] = 0;
		i--;
		while (++i < ft_strlen(nbr))
			str2[++index] = nbr[i];
		str2[i] = 0;
		block_printer(arr, str1, middle(arr, (ft_strlen(nbr) / 3), 0));
		divide(arr, str2, 0, 0);
	}
}

void	not_3_number1(char **arr, char *nbr)
{
	int		i;
	char	*c;
	char	*str2;
	int		index;

	c = malloc(2);
	index = -1;
	i = -1;
	str2 = malloc(ft_strlen(nbr));
	c[0] = nbr[0];
	c[1] = 0;
	i++;
	while (++i < ft_strlen(nbr))
		str2[++index] = nbr[i];
	str2[i] = 0;
	block_printer(arr, c, middle(arr, (ft_strlen(nbr) / 3), 0));
	divide(arr, str2, 0, 0);
}

void	divide(char **arr, char *nbr, int i, int j)
{
	int		index;
	char	*temp;
	int		step;

	temp = malloc(4);
	index = 0;
	step = 3;
	if (ft_strlen(nbr) % 3 == 0)
	{
		while (i < ft_strlen(nbr) / 3)
		{
			while (j < step)
				divide_cycle(temp, nbr, &j, &index);
			index = 0;
			i++;
			step += 3;
			block_printer(arr, temp, middle(arr, (ft_strlen(nbr) / 3) - i, 0));
		}
	}
	if (ft_strlen(nbr) % 3 == 2)
		not_3_number2(arr, nbr);
	if (ft_strlen(nbr) % 3 == 1)
		not_3_number1(arr, nbr);
	free(temp);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	**arr;

	if (argc == 2)
	{
		str = get_str(argv[1], 1);
		arr = ft_split(str, ": \n");
		divide(arr, ft_itoa(ft_atoi(argv[1])), 0, 0);
		free_arr(arr);
		free(str);
	}
	if (argc == 3)
	{
		str = get_str(argv[1], 2);
		arr = ft_split(str, ": \n");
		divide(arr, ft_itoa(ft_atoi(argv[2])), 0, 0);
		free_arr(arr);
		free(str);
	}
	else
	{
		return (0);
	}
}
