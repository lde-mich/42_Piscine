/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:48:30 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/22 04:14:02 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	logic;

	count = 0;
	logic = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			logic++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count = count * 10;
		count = count + (str[i] - 48);
		i++;
	}
	if (logic % 2 == 1)
		count = -count;
	return (count);
}
