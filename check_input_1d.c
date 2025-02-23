/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_1d.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:12:41 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/21 16:35:57 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_olny_numbers(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != ' ' && str[i] != '+'
			&& str[i] != '-')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	is_operation_wrong(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{			
		j = 0;
		if ((str[i][j] == '+' || str[i][j] == '-')
		&& !ft_isdigit(str[i][j + 1]))
			return (1);
		j++;
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9') && str[i][j] != ' ')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_num_duplicate(char **str)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	while (str[i])
	{
		j = 0;
		counter = 0;
		while (str[j])
		{
			if (cmp(str[i], str[j]))
				counter++;
			if (counter == 2)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	is_outside_range(char *str)
{
	long long	num;

	num = ft_atoi(str);
	if (num == LONG_MAX)
		return (1);
	return (0);
}

int	is_input_correct(char *str)
{
	char	**s_str;
	int		i;

	i = 0;
	s_str = ft_split(str, ' ');
	if (is_num_duplicate(s_str) || is_operation_wrong(s_str)
		|| !is_olny_numbers(str))
	{
		free_(s_str, rows(s_str));
		return (0);
	}
	while (s_str[i])
	{
		if (is_outside_range(s_str[i]))
		{
			free_(s_str, rows(s_str));
			return (0);
		}
		i++;
	}
	free_(s_str, rows(s_str));
	return (1);
}
