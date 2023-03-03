/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaterno <mpaterno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:19:42 by mpaterno          #+#    #+#             */
/*   Updated: 2022/09/25 16:32:20 by mpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_position(char *str, int stop, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != 0 && ft_in_charset(charset, str[i]))
		{
			if (stop)
			{
				stop--;
				while (str[i] && ft_in_charset(charset, str[i]))
					i++;
			}
			else
				return (&str[i]);
		}
		if (str[i])
			i++;
	}
	return (0);
}

char	*ft_cpword(char *cell, char *str, int stop, char *charset)
{
	char	*start;
	int		len;
	int		i;

	i = 0;
	start = ft_position(str, stop, charset);
	while (start[i] != 0 && ft_in_charset(charset, start[i]))
		i++;
	len = i;
	i = 0;
	cell = malloc(len + 1);
	if (!cell)
		return (0);
	while (i < len)
	{
		cell[i] = start[i];
		i++;
	}
	cell[i] = 0;
	return (cell);
}

int	ft_counting(char *str, char *charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != 0 && ft_in_charset(charset, str[i]))
		{
			counter++;
			while (str[i] != 0 && ft_in_charset(charset, str[i]))
				i++;
		}
		if (str[i])
			i++;
	}
	return (counter);
}

int	ft_in_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		n_words;
	char	**arr;
	int		i;

	i = 0;
	n_words = ft_counting(str, charset);
	arr = malloc((n_words + 1) * 8);
	while (i < n_words)
	{
		arr[i] = ft_cpword(arr[i], str, i, charset);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
