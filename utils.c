/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:14:57 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 14:12:48 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	length_stack(t_stack *head)
{
	int		counter;
	t_stack	*temp;

	counter = 0;
	temp = head;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

void	free_stack(t_stack *list)
{
	t_stack	*current;

	while (list)
	{
		current = list;
		list = list->next;
		free(current);
	}
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a, 0);
	sb(b, 0);
}

int	is_there_biggest(t_stack *head, int num)
{
	while (head)
	{
		if (head->data > num)
			return (1);
		head = head->next;
	}
	return (0);
}

void	reset_me(t_stack **a, t_stack **b)
{
	t_stack	*current;

	current = *a;
	while (current)
	{
		current->me = 0;
		current = current->next;
	}
	current = *b;
	while (current)
	{
		current->me = 0;
		current = current->next;
	}
}
