/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaterno <mpaterno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:58:56 by mpaterno          #+#    #+#             */
/*   Updated: 2022/09/25 17:01:44 by mpaterno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

# include <stdlib.h>

# include <fcntl.h>

# include <stdio.h>

# include <string.h>

void	free_arr(char **arr);

int		ft_strlen(char *str);

int		ft_strcmp(char *s1, char *s2);

char	*ft_itoa(int nb);

int		len(long nb);

char	**ft_split(char *str, char *charset);

char	*ft_itoa(int nb);

void	divide(char **arr, char *nbr, int i, int j);

int		ft_in_charset(char *charset, char c);

char	*ft_position(char *str, int stop, char *charset);

char	*ft_cpword(char *cell, char *str, int stop, char *charset);

int		ft_counting(char *str, char *charset);

char	**ft_split(char *str, char *charset);

char	*get_str(char *path, int mode);

char	*search(char **arr, char *str);

void	block_printer(char **arr, char *block, char *index);

char	*search2(char **arr, char *str);

char	*middle(char **arr, int j, int i);

int		ft_atoi(char *str);

void	not_3_number2(char **arr, char *nbr);

void	not_3_number1(char **arr, char *nbr);

void	ft_putstr(char *str);

void	block_not_0(char **arr, char *block0, char *block);

void	block_is_zero(char **arr, char *block, char *block2);

void	block_tester(char *block1, char *block2, char *block);

void	divide_cycle(char *temp, char *nbr, int *j, int *index);

void	block1_not_0(char *block, char *block1);

#endif