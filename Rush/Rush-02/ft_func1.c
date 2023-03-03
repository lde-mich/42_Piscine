/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaterno <mpaterno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:21:52 by mpaterno          #+#    #+#             */
/*   Updated: 2022/09/25 16:31:09 by mpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	divide_cycle(char *temp, char *nbr, int *j, int *index)
{
	temp[*index] = nbr[*j];
	*index += 1;
	*j += 1;
}

void	block_not_0(char **arr, char *block0, char *block)
{
	block0[0] = block[0];
	block0[1] = 0;
	ft_putstr(search(arr, block0));
	ft_putstr(search(arr, "100"));
}

void	block_tester(char *block1, char *block2, char *block)
{
	block1[1] = block[2];
	block1[0] = block[1];
	block2[0] = block[2];
	block2[1] = 0;
}

void	block_is_zero(char **arr, char *block, char *block2)
{
	block2[0] = block[2];
	block2[1] = 0;
	if (block2[0] != '0')
		ft_putstr(search(arr, block2));
}

void	block1_not_0(char *block, char *block1)
{
	block1[0] = block[1];
	block1[1] = block[2];
	block1[2] = 0;
}
