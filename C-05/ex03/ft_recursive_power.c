/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:12:39 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/27 16:40:22 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pow;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	pow = 1;
	if (power > 0)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
