/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaterno <mpaterno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:22:33 by mpaterno          #+#    #+#             */
/*   Updated: 2022/09/25 16:45:12 by mpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	block_len_3(char **arr, char *block)
{
	char	*block1;
	char	*block0;
	char	*block2;

	block2 = malloc(2);
	block0 = malloc(2);
	block1 = malloc(3);
	if (block[0] != '0')
		block_not_0(arr, block0, block);
	if (block[1] == '0')
		block_is_zero(arr, block, block2);
	else if (block[1] != '0')
		block1_not_0(block, block1);
	block_tester(block1, block2, block);
	if (search(arr, block1) != 0 && block[1] != '0')
		ft_putstr(search(arr, block1));
	else if (search(arr, block1) == 0 && block[1] != '0')
	{
		block1[1] = '0';
		ft_putstr(search(arr, block1));
		ft_putstr(search(arr, block2));
	}
	free(block1);
	free(block0);
	free(block2);
}

void	block_len_2(char **arr, char *block)
{
	char	*block1;
	char	*block0;
	char	*block2;

	block2 = malloc(2);
	block0 = malloc(2);
	block1 = malloc(3);
	if (search(arr, block) == 0)
	{
		block1[0] = block[0];
		block1[1] = '0';
		block1[2] = 0;
		block2[0] = block[1];
		block2[1] = 0;
		ft_putstr(search(arr, block1));
		ft_putstr(search(arr, block2));
	}
	else
	{
		ft_putstr(search(arr, block));
	}
	free(block1);
	free(block0);
	free(block2);
}

char	*get_str(char *path, int mode)
{
	char	*c;
	char	*str;
	int		i;
	int		fp;

	if (mode == 1)
		fp = open("numbers.dict", O_RDONLY);
	if (mode == 2)
		fp = open(path, O_RDONLY);
	c = malloc(1);
	i = 0;
	while (read(fp, c, 1) != 0)
		i++;
	close(fp);
	if (mode == 1)
		fp = open("numbers.dict", O_RDONLY);
	if (mode == 2)
		fp = open(path, O_RDONLY);
	str = malloc(i + 1);
	read(fp, str, i);
	str[i + 1] = 0;
	close(fp);
	return (str);
}

char	*search(char **arr, char *str)
{
	int	i;

	i = 0;
	while (arr[i] != 0)
	{
		if (ft_strcmp(arr[i], str) == 0)
		{
			return (arr[i + 1]);
		}
		i++;
	}
	return (0);
}

void	block_printer(char **arr, char *block, char *index)
{
	char	*block1;
	char	*block0;
	char	*block2;

	block2 = malloc(2);
	block0 = malloc(2);
	block1 = malloc(3);
	if (ft_strlen(block) == 3)
	{
		block_len_3(arr, block);
		ft_putstr(index);
	}
	if (ft_strlen(block) == 2)
	{
		block_len_2(arr, block);
		ft_putstr(index);
	}
	if (ft_strlen(block) == 1)
	{
		ft_putstr(search(arr, block));
		ft_putstr(index);
	}
	free(block1);
	free(block0);
	free(block2);
}
