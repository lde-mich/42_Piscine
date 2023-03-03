/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaterno <mpaterno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:46:31 by mpaterno          #+#    #+#             */
/*   Updated: 2022/09/25 16:30:57 by mpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != 0)
	{
		free(arr[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (result == 0)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			result = s1[i] - s2[i];
			return (result);
		}
		result = s1[i] - s2[i];
		i++;
	}
	return (result);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
}

char	*middle(char **arr, int j, int i)
{
	int	len;
	int	result;

	len = 0;
	result = 1;
	while (i < j)
	{
		result *= 1000;
		i++;
	}
	if (result >= 1000)
	{
		return (search(arr, ft_itoa(result)));
	}
	else
		return ("");
}
