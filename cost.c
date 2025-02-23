/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:12:52 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/17 13:35:29 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cost(t_stack *a, t_stack **b)
{
	t_stack	*current;
	int		len_a;
	int		len_b;

	len_a = length_stack(a);
	len_b = length_stack(*b);
	current = *b;
	while (current)
	{
		current->cost = 0;
		if (current->is_up)
			current->cost = current->index;
		else
			current->cost = len_b - current->index;
		if (current->target->is_up)
			current->cost += current->target->index;
		else
			current->cost += (len_a - current->target->index);
		current = current->next;
	}
}

int	less_cost(t_stack *head)
{
	int	i;

	i = head->cost;
	while (head)
	{
		if (head->cost < i)
			i = head->cost;
		head = head->next;
	}
	return (i);
}

t_stack	*set_less_cost(t_stack **b)
{
	int	min;

	t_stack *(current) = NULL;
	t_stack *(less_cost_node) = NULL;
	min = less_cost(*b);
	current = *b;
	while (current)
	{
		if (current->cost == min)
		{
			current->me = 1;
			current->target->me = 1;
			less_cost_node = current;
			break ;
		}
		current = current->next;
	}
	return (less_cost_node);
}
