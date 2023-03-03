/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:44:11 by lde-mich          #+#    #+#             */
/*   Updated: 2022/09/21 18:15:48 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	p;

	p = 0;
	s = 0;
	if (to_find[p] == '\0')
		return (str);
	while (str[s] != '\0')
	{
		while (str[s + p] == to_find[p] && str[s + p] != '\0')
			p++;
		if (to_find[p] == '\0')
			return (str + s);
		s++;
		p = 0;
	}
	return (0);
}
