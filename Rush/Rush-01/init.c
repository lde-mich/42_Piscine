/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:20:43 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/18 10:21:00 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	increment(int *i, int *j, int *counter, int *step)
{
	*i = *i + 1;
	*j = 0;
	*counter = 1;
	*step = *step + 2;
}

void	init(int *i, int *j, int *controll, int *final_counter)
{
	*i = 0;
	*j = 0;
	*controll = 0;
	*final_counter = 0;
}

void	init_rev(int *i, int *j, int *controll, int *final_counter)
{
	*i = 0;
	*j = 0;
	*controll = 3;
	*final_counter = 0;
}
