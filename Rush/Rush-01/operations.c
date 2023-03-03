/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:23:53 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/18 10:24:25 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_factorial(int nbr);

int	ft_factorial(int nbr)
{
	int	result;

	result = nbr;
	if (result == 0 || result == 1)
		return (1);
	else if (result < 0)
		return (-1);
	else
	{
		result *= ft_factorial(nbr - 1);
		return (result);
	}
}
