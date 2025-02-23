/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputmorethanstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:13:29 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/19 10:49:56 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rows(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	free_(char **str, int rows)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	is_list_ordered(t_stack *head)
{
	int (small_num) = head->data;
	while (head != NULL)
	{
		if (small_num > head->data)
			return (0);
		small_num = head->data;
		head = head->next;
	}
	return (1);
}

int	is_there_only_spaces(char *s)
{
	int (i) = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	is_there_spacesinrow_or_empty(char **s)
{
	int (i) = 0;
	while (s[i])
	{
		if (is_there_only_spaces(s[i]))
			return (1);
		if (s[i][0] == '\0')
			return (1);
		i++;
	}
	return (0);
}
